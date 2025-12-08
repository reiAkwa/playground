#include <bits/stdc++.h>
#include <string>

bool has_7(int n) {
  std::string str = std::to_string(n);
  return str.find("7") != std::string::npos;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    if (i % 7 == 0 || has_7(i)) {
      std::cout << i << '\n';
    }
  }
}
