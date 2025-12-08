#include <bits/stdc++.h>

#define MAXN 1000
#define MAXM 100

int arr[MAXN * MAXM];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  int m = 0;
  std::cin >> n >> m;

  for (int i = 0; i < n * m; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr, arr + n * m);

  for (int i = 0; i < n * m; ++i) {
    std::cout << arr[i];
    if (i < n * m - 1) {
      std::cout << ' ';
    }
  }

  std::cout << '\n';

  return 0;
}
