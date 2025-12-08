#include <bits/stdc++.h>
#include <sstream>

std::string solve(int in) {
  std::stringstream ss("");

  int ft = 0;
  int yd = 0;
  int mi = 0;
  if (in > 12) {
    ft = in / 12;
    in = in % 12;
  }
  if (ft > 3) {
    yd = ft / 3;
    ft = ft % 3;
  } if (yd > 1760) {
    mi = yd / 1760;
    yd = yd % 1760;
  }

  if (mi) {
    ss << mi << " mi ";
  }
  if (yd) {
    ss << yd << " yd ";
  }
  if (ft) {
    ss << ft << " ft ";
  } if (in) {
    ss << in << " in";
  }

  return ss.str();
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int in = 0;
  std::cin >> in;

  std::cout << solve(in) << '\n';
}
