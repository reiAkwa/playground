#include <bits/stdc++.h>

bool is_leap_year(int y) {
  if (y % 4 == 0 && y % 100 != 0) {
    return true;
  } else if (y % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int y = 0;
  int m = 0;

  std::cin >> y >> m;

  switch (m) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      std::cout << 31 << '\n';
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      std::cout << 30 << '\n';
      break;
    case 2:
      std::cout << (is_leap_year(y) ? 29 : 28) << '\n';
      break;
    default:
      std::cout << "wtf" << '\n';
  }
}
