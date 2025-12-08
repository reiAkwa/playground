#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;
  int m = n;

  int male = 0;
  int female = 0;

  int height = 0;
  while(n--) {
    std::cin >> height;
    if (height >= 178 && height <= 180) male++;
  }
  while(m--) {
    std::cin >> height;
    if (height >= 168 && height <= 170) female++;
  }

  std::cout << male << ' ' << female;
}
