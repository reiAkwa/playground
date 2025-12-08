#include <bits/stdc++.h>

struct Birthday {
  int y;
  int m;
  int d;

  int get_s() {
    return 10000 * y + 100 * m + d;
  }
};

bool operator>(Birthday lhs, Birthday rhs) {
  return lhs.get_s() > rhs.get_s();
}
bool operator<(Birthday lhs, Birthday rhs) {
  return lhs.get_s() < rhs.get_s();
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::map<std::string, Birthday> p;

  std::cin >> p["A"].y >> p["A"].m >> p["A"].d;
  std::cin >> p["B"].y >> p["B"].m >> p["B"].d;
  std::cin >> p["C"].y >> p["C"].m >> p["C"].d;

  std::vector<std::pair<std::string, Birthday>> v(p.begin(), p.end());
  std::sort(v.begin(), v.end(),
            [](std::pair<std::string, Birthday> lhs, std::pair<std::string, Birthday> rhs) { return lhs.second < rhs.second; });

  for (std::pair<std::string, Birthday>& i : v) {
    std::cout << i.first;
  }
}
