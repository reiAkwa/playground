#include <bits/stdc++.h>

int earn[10005] = {};

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  for (int i = 1; i <= n; ++i) {
    int cost = 0;
    int sold = 0;
    std::cin >> cost >> sold;
    earn[i] = sold - cost;
  }

  int biggest = earn[1];
  int index = 1;
  for (int i = 1; i <= n; ++i) {
    if (earn[i] > biggest) {
      biggest = earn[i];
      index = i;
    }
  }

  std::cout << index << '\n';
}
