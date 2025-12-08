/// by reiAkwa 2025/11/30
/// 近序数组 —— 本质上是判断数组的单调性

#include <bits/stdc++.h>

int arr[10005];

bool isIncreasing(int l, int r) {
  for (int i = l; i < r - 1; ++i) {
    if (arr[i] > arr[i + 1]) {
      return false;
    }
  }

  return true;
}
bool isDecreasing(int l, int r) {
  for (int i = l; i < r - 1; ++i) {
    if (arr[i] < arr[i + 1]) {
      return false;
    }
  }

  return true;
}

bool isOredered(int l, int r) {
  return isIncreasing(l, r) || isDecreasing(l, r);
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }

  bool isNear = false;
  for (int m = 0; m < n; ++m) { // the middle
    bool left = isOredered(0, m);
    bool right = isOredered(m, n);

    if (left && right) {
      isNear = true;
      break;
    }
  }

  std::cout << (isNear ? "Yes" : "No") << '\n';

  return 0;
}
