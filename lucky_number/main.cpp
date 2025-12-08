#include <bits/stdc++.h>

constexpr int N = 10001;
int gifts[N] = {};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> gifts[i];
  }

  int sum = 0;
  for (int i = 0; i < n; ++i) {
    if (gifts[i] % 4 == 0 || gifts[i] % 7 == 0) {
      sum += gifts[i];
    }
  }


  std::cout << sum << '\n';
}
