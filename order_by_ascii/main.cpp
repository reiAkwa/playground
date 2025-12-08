#include <bits/stdc++.h>

char arr[65];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + n, std::greater<char>());

  for (int i = 0; i < n; ++i) {
    std::cout << arr[i];
  }

  return 0;
}
