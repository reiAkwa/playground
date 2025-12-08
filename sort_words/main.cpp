#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::string str;
  std::getline(std::cin, str);

  std::stringstream ss(str);
  std::string word;
  std::vector<std::string> words;
  while (ss >> word) {
    words.push_back(word);
  }

  std::sort(words.begin(), words.end(),
            [](std::string lhs, std::string rhs) { return lhs.back() < rhs.back(); });

  for (std::size_t i = 0; i < words.size(); ++i) {
    std::cout << words[i].substr(0, words[i].size() - 1);
    if (i != words.size() - 1) {
      std::cout << ' ';
    }
  }

  std::cout << '\n';

  return 0;
}
