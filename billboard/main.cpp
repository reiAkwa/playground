#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  int score = 0;
  char c = 0;
  int m = 0;
  while(n--) {
    std::cin >> c;
    switch (c) {
      case 'r':
        std::cin >> m;
        score += m;
        break;
      case 'y':
        score += 2;
        break;
      case 'g':
        score += 3;
        break;
      case 'c':
        score += 4;
        break;
      case 'b':
        score += 5;
        break;
      case 'p':
        score += 6;
        break;
      case 'B':
        score += 7;
        break;
      default:
        score += 0;
        break;
    }

    // std::cout << score << '\n';
  }

  std::cout << score << '\n';
}
