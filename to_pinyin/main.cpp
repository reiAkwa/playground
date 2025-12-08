#include <bits/stdc++.h>

#define N 105

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string input;
  std::getline(std::cin, input);

  int space = 0;
  std::string buf(N, '0');

  for (std::size_t i = 0; i < input.size(); ++i) {
    if (input[i] == ' ') {
      space = i;
      buf[i] = ' ';
    } else if (isalpha(input[i])) {
      buf[i] = tolower(input[i]);
    }
  }

  std::string name;

  for (int i = space; i < N; ++i) {
    if (isalpha(buf[i])) {
      name.push_back(buf[i]);
    }
  }
  for (int i = 0; i < space; ++i) {
    if (isalpha(buf[i])) {
      name.push_back(buf[i]);
    }
  }

  std::cout << name;

  return 0;
}
