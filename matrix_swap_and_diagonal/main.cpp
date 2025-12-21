#include <bits/stdc++.h>

int matrix[30][30];
int status[30][30];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int x = 0;
  int y = 0;
  std::cin >> x >> y;

  for (int i = 1; i <= x; ++i) {
    for (int j = 1; j <= y; ++j) {
      std::cin >> matrix[i][j];
    }
  }

  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  std::cin >> a >> b >> c >> d;

  // swap
  int max = 0;
  int min = INT_MAX;
  for (int i = a; i <= c; ++i) {
    for (int j = b; j <= d; ++j) {
      min = std::min(min, matrix[i][j]);
      max = std::max(max, matrix[i][j]);
    }
  }

  int val = max - min;
  int swap_count = 0;
  for (int i = a; i <= c; ++i) {
    for (int j = b; j <= d; ++j) {
      if (matrix[i][j] < val) {
        matrix[i][j] = max;
        ++swap_count;
        ++status[i][j];
      }
    }
  }

  int diagonal_swap_count = 0;
  for (int i = 1; i <= x; ++i) {
    if (status[i][i] >= 1) {
      ++diagonal_swap_count;
    }
  }
  for (int i = 1; i <= x; ++i) {
    if (status[i][x + 1 - i] >= 1) {
      ++diagonal_swap_count;
    }
  }

  std::cout << swap_count << ' ' << diagonal_swap_count << '\n';

  return 0;
}
