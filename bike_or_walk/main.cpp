#include <bits/stdc++.h>

int fcmp(double lhs, double rhs) {
  double res = fabs(lhs - rhs);
  if (res < 10e-8) return 0;
  else if (lhs > rhs) return 1;
  else return -1;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int dis = 0;
  std::cin >> dis;

  double walk = dis / 1.2;
  double bike = 27 + 23 + dis / 3.0;

  switch (fcmp(walk, bike)) {
    case 0:
      std::cout << "All";
      break;
    case 1:
      std::cout << "Bike";
      break;
    case -1:
      std::cout << "Walk";
      break;
  }
}
