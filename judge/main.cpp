#include <algorithm>
#include <bits/stdc++.h>

struct Player {
  std::string name;
  int score;
};

std::vector<Player> vv;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  while (n--) {
    std::string name;
    std::cin >> name;

    std::vector<int> scores;
    for (int i = 0; i < 7; ++i) {
      int num = 0;
      std::cin >> num;
      scores.push_back(num);
    }

    int max = *std::max_element(scores.begin(), scores.end());
    int min = *std::min_element(scores.begin(), scores.end());

    // scores.erase(std::remove(scores.begin(),
    //                          std::remove(scores.begin(), scores.end(), max),
    //                          min),
    //              scores.end());

    // int total = 0;
    // for (int i : scores) {
    //   total += i;
    // }

    int total = 0;
    for (int i : scores) {
      total += i;
    }

    vv.push_back(Player{name, total - max - min});
  }

  std::sort(vv.begin(), vv.end(),
            [](Player lhs, Player rhs) { return lhs.score > rhs.score; });

  for (auto &i : vv) {
    std::cout << i.name << ' ' << i.score << '\n';
  }

  return 0;
}
