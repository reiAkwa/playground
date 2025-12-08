#include <bits/stdc++.h>

int arr[10005];

void bubbleSort(int count, int *first, int *last) {
  int count_ = count;
  bool flag = true;
  while (flag && count_--) {
    flag = false;
    for (int *it = first; it != last - 1; ++it) {
      if (*it > *(it + 1)) {
        flag = true;
        int temp = *it;
        *it = *(it + 1);
        *(it + 1) = temp;
      }
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  int m = 0;
  std::cin >> n >> m;

  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  bubbleSort(m, arr, arr + n);

  for (int i = 0; i < n; ++i) {
    std::cout << arr[i] << (i == n - 1 ? '\n' : ' ');
  }

  return 0;
}
