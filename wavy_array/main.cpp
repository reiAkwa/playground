#include <bits/stdc++.h>
#include <cstring>

int arr[10005];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 0;
  std::cin >> t;
  while(t--) {
    memset(arr, 0, sizeof(arr));
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
      std::cin >> arr[i];
    }

    bool isWavy = true;
    for (int i = 1; i < n - 1; ++i) {
      if (arr[i - 1] == arr[i] || arr[i] == arr[i + 1]) {
        isWavy = false;
      }
      if (
        (arr[i - 1] < arr[i] && arr[i] < arr[i + 1]) ||
        (arr[i - 1] > arr[i] && arr[i] > arr[i + 1])
      ) {
        isWavy = false;
      }
    }

    std::cout << (isWavy ? "Yes" : "No");
    std:: cout << '\n';
  }

  return 0;
}
