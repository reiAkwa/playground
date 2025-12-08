#include <bits/stdc++.h>

int arr[10005];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  int min = arr[0];
  int max = arr[0];
  for (int i = 0; i < n; ++i) {
    min = std::min(arr[i], min);
    max = std::max(arr[i], max);
  }
  
  std::cout << max << ' ' << min << '\n';

  return 0;
}
