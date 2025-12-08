#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
  int result = 0;
  for (int i = 1; i <= n; ++i) {
    result += i;
  }

  if (n > 0) { return result + solve(n - 1); }
  else { return 0; }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 0;
  cin >> n;

  cout << solve(n) << '\n';
}
