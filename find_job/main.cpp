#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int wage = 0;
  char has_vaca = 0;
  int distance = 0;

  std::cin >> wage >> has_vaca >> distance;

  bool is_wage = wage >= 5000;
  bool is_vaca = has_vaca == 'y';
  bool is_dis = distance <= 2000;

  if (
    (is_wage && is_vaca) ||
    (is_wage && is_dis) ||
    (is_vaca && is_dis)
  ) {
    std::cout << "Accept\n";
  } else {
    std::cout << "Refuse\n";
  }
}
