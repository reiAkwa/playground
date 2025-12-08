#include <bits/stdc++.h>

void sort(int arr[], int first, int last) {
  for (int i = first + 1; i < last; ++i) {
    for (int j = first; j < i; ++j) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int input[5] = {};
  for (int i = 1; i < 5; ++i) {
    std::cin >> input[i];
  }

  sort(input, 1, 5);

  for (int i = 1; i < 5; ++i) {
    std::cout << input[i] << (i == 4 ? "" : " ");
  }
}
