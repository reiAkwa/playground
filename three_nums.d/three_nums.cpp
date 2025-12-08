#include <iostream>

constexpr int N = 5;

void bubble_sort(int* arr, int first, int last) {
  for (int i = first + 1; i < last; ++i) {
    for (int j = first; j < i; ++j) {
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j] ;
        arr[j] = temp;
      }
    }
  }
} 

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int input[N] = {};
  for (int i = 1; i < N; ++i) {
    std::cin >> input[i];
  }
  bubble_sort(input, 1, 5);

  int result[N] = {};
  result[1] = input[4] - input[3];
  result[2] = input[4] - input[2];
  result[3] = input[4] - input[1];
  bubble_sort(result, 1, 4);

  std::cout << result[1] << ' ' << result[2] << ' ' << result[3] << '\n';
}
