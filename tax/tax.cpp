#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int income = 0;
  int specail_dis = 0;

  std::cin >> income >> specail_dis;

  int should_tax = income - 5000 - specail_dis;

  if (income < 5000) {
    std::cout << 0;
  } else if (should_tax <= 3000 && should_tax > 0) {
    std::cout << should_tax * 0.03;
  } else if (should_tax > 3000 && should_tax <= 12000) {
    std::cout << should_tax * 0.1 - 210;
  } else if (should_tax > 12000 && should_tax <= 25000) {
    std::cout << should_tax * 0.2 - 1410;
  } else if (should_tax > 25000 && should_tax <= 35000) {
    std::cout << should_tax * 0.25 - 2660;
  } else if (should_tax > 35000 && should_tax <= 55000) {
    std::cout << should_tax * 0.3 - 4410;
  } else if (should_tax > 55000 && should_tax <= 80000) {
    std::cout << should_tax * 0.35 - 7160;
  } else if (should_tax >= 80000) {
    std::cout << should_tax * 0.45 - 15160;
  }
}
