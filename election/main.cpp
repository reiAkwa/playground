#include <bits/stdc++.h>

int votes[105];
int elector[105];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  int m = 0;
  std::cin >> n >> m;

  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      std::cin >> votes[j];
    }

    int best = 1;
    for (int j = 2; j <= n; ++j) {
      if (votes[j] > votes[best]) {
        best = j;
      }
    }

    ++elector[best];
  }

  int winner = 1;
  for (int i = 2; i <= n; ++i) {
    if (elector[i] > elector[winner]) {
      winner = i;
    }
  }

  std::cout << winner << '\n';

  return 0;
}
