#include <bits/stdc++.h>

int arr[100];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  for (int i = 0; i < 100; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + 100, std::greater<int>());

  for (int i = 0; i < 100; ++i) {
    std::cout << arr[i] << (i == 100 - 1 ? '\n' : ' ');
  }

  return 0;
}
