#include <bits/stdc++.h>
#include <cctype>

bool isValidPrefix(char c) {
  return isalnum(c) || c == '_';
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string buf;
  std::getline(std::cin, buf);

  std::vector<int> suffix(buf.size() + 1, 0);
  for (std::size_t i = buf.size() - 1; i >= 0; --i) {
    if (isalnum(buf[i])) {
      suffix[i] += suffix[i + 1] + 1;
    } else {
      suffix[i] = 0;
    }
  }

  std::vector<int> prefix(buf.size() + 1, 0);
  for (std::size_t i = 1; i < buf.size(); ++i) {
    prefix[i] += prefix[i - 1];
    prefix[i] += (isValidPrefix(buf[i]) ? 1 : 0);
  }

  std::vector<int> ats;

  return 0;
}
