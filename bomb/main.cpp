#include <bits/stdc++.h>

struct Node {
  int x;
  int y;
};

char map[1005][1005] = {};
std::vector<Node> walls;

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 0;
  std::cin >> t;

  while (t--) {
    memset(map, 0, sizeof(map));
    int n = 0;
    int m = 0;

    for (int i = 1; i <= n; ++i) {
      std::cin >> map[i];
    }

    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= m; ++j) {
        if (map[i][j] == '*') {
          walls.push_back(Node{i, j});
        }
      }
    }

    Node sentinel = walls.back();
    walls.pop_back();

    bool has_bomb = true;
    for (auto it = walls.begin(); it != walls.end(); ++it) { // same col
    }

    // same row
    
    // others in the same col

    // others in the same row
  }

  return 0;
}
