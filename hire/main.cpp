#include <bits/stdc++.h>

struct Person {
  int id;
  int k;
  int i;
  int e;
};

Person people[500005];
int out[500005] = {};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    std::cin >> people[i].k;
  }
  for (int i = 1; i <= n; ++i) {
    std::cin >> people[i].i;
  }
  for (int i = 1; i <= n; ++i) {
    std::cin >> people[i].e;
  }

  int count_of_loser = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (i == j) continue;

      if (people[i].k < people[j].k && people[i].i < people[j].i && people[i].e < people[j].e && out[i] != -1) {
        ++count_of_loser;
        out[i] = -1;
      }
    }
  }

  std::cout << count_of_loser << '\n';

  return 0;
}
