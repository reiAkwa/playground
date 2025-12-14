#include <bits/stdc++.h>

int digits(int n) {                     // 位数
    return std::to_string(n).size();
}

int gcd(int a, int b) {                 // 最大公约数
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
  return a * b / gcd(a, b);
}

struct Fraction {
    int num, dem;
    Fraction(int n, int d) {            // 自动约分
        int g = gcd(n, d);
        num = n / g;
        dem = d / g;
        if (dem < 0) { num = -num; dem = -dem; }  // 保证分母为正
    }
};

Fraction operator+(Fraction lhs, Fraction rhs) {
    int l = lcm(lhs.dem, rhs.dem);
    return Fraction(lhs.num * (l / lhs.dem) + rhs.num * (l / rhs.dem), l);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    if (!(std::cin >> N)) return 0;
    std::cin.ignore();

    while (N--) {
        std::string s;
        std::getline(std::cin, s);

        std::size_t dot = s.find('.');
        std::size_t L   = s.find('(');
        std::size_t R   = s.find(')');

        int limited   = 0;              // 非循环部分数值
        int circ      = 0;              // 循环节数值
        int len_limited = 0;            // 非循环部分位数
        int len_circ    = 0;            // 循环节位数

        if (L == std::string::npos) {   // 无循环
            limited = std::stoi(s.substr(dot + 1));
            len_limited = s.size() - dot - 1;
        } else {                        // 有循环
            if (L > dot + 1) {          // 存在非循环部分
                limited = std::stoi(s.substr(dot + 1, L - dot - 1));
                len_limited = L - dot - 1;
            }
            circ = std::stoi(s.substr(L + 1, R - L - 1));
            len_circ = R - L - 1;
        }

        Fraction f_limited(0, 1);
        if (len_limited > 0)
            f_limited = Fraction(limited, static_cast<int>(std::pow(10, len_limited)));

        Fraction f_circ(0, 1);
        if (len_circ > 0) {
            int denom_circ = static_cast<int>(std::pow(10, len_circ)) - 1;      // 999…9
            int shift      = static_cast<int>(std::pow(10, len_limited));       // 10^m
            f_circ = Fraction(circ, denom_circ * shift);
        }

        Fraction ans = f_limited + f_circ;
        std::cout << ans.num << '/' << ans.dem << '\n';
    }
    return 0;
}
