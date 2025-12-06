#include <bits/stdc++.h>
#include <cstddef>
#include <deque>

bool checkValidChar(char c) {
  return isalnum(c) || (c == '_');
}

// void checkValidSubstr(int &count, const std::string &str, const std::vector<int> &ats) {
//   std::deque<int> chars;
//   std::deque<int> ats_(ats.begin(), ats.end());
//   while (!ats_.empty()) {
//     int at = ats_.front();
//     ats_.pop_front();
//     if (at > 0) {
//       chars.
//     }
//   }
// }

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string str;
  std::getline(std::cin, str);

  std::vector<int> ats;
  for (std::size_t i = 0; i < str.size(); ++i) {
    if (i == '.') {
      ats.push_back(i);
    }
  }

  int count = 0;
  for (size_t i = 1; i < ats.size() - 1; ++i) {
    bool front_ok = true;
    bool back_ok = true;
    for (size_t j = ats.at(i) - 1; j >= (size_t)ats.at(i - 1) && j >= 0; --j) {
      if(!checkValidChar(str.at(j))) {
        front_ok = false;
        break;
      } else if (str.at(j) == '.') {
         break; 
      }
    }
    for (size_t j = ats.at(i) + 1; j < (size_t)ats.at(i + 1) && j < str.size(); ++j) {
      bool is_domain = false;
      bool is_before_dot = true;
      bool is_after_dot = false;
    }
  }
  
  
  return 0;
}
