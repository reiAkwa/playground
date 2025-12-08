#include <bits/stdc++.h>

using namespace std;

int calc_tax(int s);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 0;
  cin >> t;

  int s = 0;
  for (; ; s += 100) {
    if (t + calc_tax(s) == s) break;
  }

  cout << s << '\n';

  return 0;
}

int calc_tax(int s) {
  int a = s - 3500;

  if (a <= 0) {
    return 0;
  } else if (a <= 1500) {
    return a * 0.03;
  } else if (a <= 4500) {
    return 1500 * 0.03 + (a - 1500) * 0.1;
  } else if (a <= 9000) {
    return 1500 * 0.03 + (4500 - 1500) * 0.1 + (a - 4500) * 0.2;
  } else if (a <= 35000) {
    return 1500 * 0.03 + (4500 - 1500) * 0.1 + (9000 - 4500) * 0.2 + (a - 9000) * 0.25;
  } else if (a <= 55000) {
    return 1500 * 0.03 + (4500 - 1500) * 0.1 + (9000 - 4500) * 0.2 + (35000 - 9000) * 0.25 + (a - 35000) * 0.3;
  } else if (a <= 80000) {
    return 1500 * 0.03 + (4500 - 1500) * 0.1 + (9000 - 4500) * 0.2 + (35000 - 9000) * 0.25 + (55000 - 35000) * 0.3 + (a - 55000) * 0.35;
  } else {
    return 1500 * 0.03 + (4500 - 1500) * 0.1 + (9000 - 4500) * 0.2 + (35000 - 9000) * 0.25 + (55000 - 35000) * 0.3 + (80000 - 55000) * 0.35 + (a - 80000) * 0.45;
  }
}
