#include <bits/stdc++.h>

int arr[105] = {};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + n, std::greater<int>());

  for (int i = 0; i < n; ++i) {
    std::cout << arr[i]; 
    if (i != n - 1) {
      std::cout << ' ';
    }
  }

  std::cout << '\n';

  return 0;
}
