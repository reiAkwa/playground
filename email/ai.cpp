#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

// 判断是否是前缀的合法字符（字母/数字/_）
bool isPrefixChar(char c) {
    return isalnum(c) || c == '_';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    int n = s.size();
    if (n < 5) { // 最小合法邮箱：a@a.a（长度5）
        cout << 0 << endl;
        return 0;
    }

    // 预处理：suffix[i]表示从i开始的合法后缀数（纯字母串的长度）
    vector<int> suffix(n + 1, 0); // suffix[n] = 0
    for (int i = n - 1; i >= 0; --i) {
        if (isalpha(s[i])) {
            suffix[i] = suffix[i + 1] + 1;
        } else {
            suffix[i] = 0;
        }
    }

    long long total = 0; // 防止溢出（1e6长度可能有大量合法邮箱）

    // 遍历所有@的位置
    for (int at = 0; at < n; ++at) {
        if (s[at] != '@') continue;

        // 步骤1：统计@左侧的合法前缀数（以字母开头，连续合法字符）
        int prefix_cnt = 0;
        // 先找前缀的起始位置（必须是字母）
        int start = at - 1;
        bool has_valid_start = false;
        while (start >= 0) {
            if (isalpha(s[start])) {
                has_valid_start = true;
                break;
            } else if (isPrefixChar(s[start])) {
                // 是数字/_，但不是字母开头，继续往前找
                start--;
            } else {
                // 遇到非合法字符，终止
                break;
            }
        }
        if (!has_valid_start) continue; // 前缀无合法开头

        // 统计从start到at-1的连续合法字符数
        int current = start;
        while (current <= at - 1) {
            if (isPrefixChar(s[current])) {
                prefix_cnt++;
                current++;
            } else {
                break;
            }
        }
        if (prefix_cnt == 0) continue;

        // 步骤2：遍历@右侧的所有.，检查合法性并累加贡献
        int dot = at + 1;
        while (dot < n) {
            if (s[dot] == '.') {
                // 检查域名：@+1 到 dot-1 非空且全为字母/数字
                bool domain_valid = true;
                if (dot - 1 < at + 1) { // 域名为空
                    domain_valid = false;
                } else {
                    for (int k = at + 1; k < dot; ++k) {
                        if (!isalnum(s[k])) {
                            domain_valid = false;
                            break;
                        }
                    }
                }
                // 检查后缀：dot+1开始有合法后缀（纯字母串）
                if (domain_valid && suffix[dot + 1] > 0) {
                    total += (long long)prefix_cnt * suffix[dot + 1];
                }
            }
            dot++;
        }
    }

    cout << total << endl;
    return 0;
}

