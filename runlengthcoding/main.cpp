#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string str;
  std::cin >> str;

  std::stringstream ss;

  int count = 0;
  for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
    ++count;
    if (*it != *(it + 1)) {
      ss << *it;
      if (count == 1) {
        //
      } else {
        ss << count;
      }
      count = 0;
    }
  }

  std::cout << ss.str();

  return 0;
}
