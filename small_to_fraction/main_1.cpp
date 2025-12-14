#include <bits/stdc++.h>

int digits(int n) {
  return std::to_string(n).size();
}

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

struct Fraction {
  Fraction(int num_, int dem_)
    : num(num_ / gcd(num_, dem_))
    , dem(num_ / gcd(num_, dem_)) {}
  
  int num;
  int dem;
};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  while (n--) {
    std::string buf;
    std::cin >> buf;

    std::size_t dot_index = buf.find(".");
    std::size_t circ_left_index = buf.find("(");
    std::size_t circ_right_index = buf.find(")");
  }

  return 0;
}
