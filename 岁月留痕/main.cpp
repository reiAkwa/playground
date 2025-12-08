#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  if (!(cin >> n))
    return 0;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  // 月份默认顺序：1..12
  vector<int> base = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // 枚举 3 年的闰年情况（2^3 = 8 种）
  for (int mask = 0; mask < 8; ++mask) {
    vector<int> months;
    months.reserve(36);
    for (int y = 0; y < 3; ++y) {
      vector<int> year = base;
      if ((mask >> y) & 1) {
        year[1] = 29; // 2 月置 29
      }
      for (int m = 0; m < 12; ++m)
        months.push_back(year[m]);
    }
    // 在 months 中找是否存在连续长度为 n 的子段等于 a
    for (int start = 0; start + n <= (int)months.size(); ++start) {
      bool ok = true;
      for (int i = 0; i < n; ++i) {
        if (months[start + i] != a[i]) {
          ok = false;
          break;
        }
      }
      if (ok) {
        cout << "Yes\n";
        return 0;
      }
    }
  }

  cout << "No\n";
  return 0;
}
