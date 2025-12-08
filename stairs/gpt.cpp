#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    if (!(cin >> n)) return 0;
    // dp[i][0] even steps, dp[i][1] odd steps
    long long dp_even[45] = {0}, dp_odd[45] = {0};
    dp_even[0] = 1; // 到0阶，0步（偶数）
    dp_odd[0] = 0;
    for (int i = 0; i <= n; ++i) {
        if (i + 1 <= n) {
            dp_odd[i+1]  += dp_even[i]; // 从偶数步数加一走到奇数
            dp_even[i+1] += dp_odd[i];  // 从奇数步数加一走到偶数
        }
        if (i + 2 <= n) {
            dp_odd[i+2]  += dp_even[i];
            dp_even[i+2] += dp_odd[i];
        }
    }
    cout << dp_odd[n] << "\n";
    return 0;
}
