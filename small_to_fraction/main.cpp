#include <bits/stdc++.h>

int digits(int n) {
  return std::to_string(n).size(); // there should not be any negative, right?
}

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

struct Fraction {
  int num;
  int dem;

  Fraction(int num_, int dem_)
    : num(num_ / gcd(num_, dem_))
    , dem(dem_ / gcd(num_, dem_)) {}
};

Fraction operator+(Fraction lhs, Fraction rhs) {
  int lnum = lhs.num;
  int ldem = lhs.dem;
  int rnum = rhs.num;
  int rdem = rhs.dem;

  int lcm_ = lcm(ldem, rdem);
  lnum *= lcm_;
  ldem *= lcm_;
  rnum *= lcm_;
  rdem *= lcm_;

  return Fraction(lnum + rnum, rdem);
}

Fraction operator-(Fraction lhs, Fraction rhs) {
  int lnum = lhs.num;
  int ldem = lhs.dem;
  int rnum = -rhs.num;
  int rdem = -rhs.dem;

  int lcm_ = lcm(ldem, rdem);
  lnum *= lcm_;
  ldem *= lcm_;
  rnum *= lcm_;
  rdem *= lcm_;

  return Fraction(lnum + rnum, rdem);
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;
  std::cin.ignore();
  while (n--) {
    std::string buf;
    std::getline(std::cin, buf);
    
    std::size_t circ_first_index = buf.find("(");
    std::size_t circ_last_index = std::string::npos;
    circ_first_index = buf.find("(");
    if (circ_first_index != std::string::npos) {
      circ_last_index = buf.find(")");
    }

    int limited = -1;
    int circular = -1;

    if (circ_first_index != 2) { // left ( doesn't appear just behind the dot
      limited = std::stoi(std::string(buf.begin() + 2, buf.begin() + circ_first_index));
    }

    if (circ_first_index != std::string::npos) {
      circular = std::stoi(std::string(buf.begin() + circ_first_index + 1, buf.begin() + circ_last_index));
    }

    Fraction f_limited(0, 1);
    if (limited != -1) {
      f_limited = Fraction(limited, std::pow(10, digits(limited)));
    }
    Fraction f_circular(0, 1);
    if (circular != -1) {
      f_circular = Fraction(circular / (std::pow(10, circular) - 1), digits(limited));
    }

    Fraction res = f_limited + f_circular;
    std::cout << res.num << '/' << res.dem << '\n';
  }

  return 0;
}
