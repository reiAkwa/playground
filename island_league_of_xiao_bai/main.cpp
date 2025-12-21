#include <bits/stdc++.h>

struct Node {
  int x;
  int y;
};

int n = 0;
int m = 0;

int map[1005][1005];

int direct[2][4] = {
  {1, -1, 0, 0},
  {0, 0, 1, -1},
};

int bfs(int init_x, int init_y) {
  int area = 0;
  std::queue<Node> q;
  q.push(Node{init_x, init_y});

  while (!q.empty()) {
    Node node = q.front();
    q.pop();
    if (map[node.x][node.y] == 1) {
      ++area;
      map[node.x][node.y] = 0;
    }
    for (int i = 0; i < 4; ++i) {
      if (node.x + direct[0][i] >= 0 && node.x + direct[0][i] < n && node.y + direct[1][i] >= 0 && node.y + direct[1][i] < m) {
        q.push(Node{node.x + direct[0][i], node.y + direct[1][i]});
      }
    }
  }

  return area;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::cin >> n >> m;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      std::cin >> map[i][j];
    }
  }

  int island_count = 0;
  int max_area = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      if(map[i][j] == 1) {
        ++island_count;
        max_area = std::max(max_area, bfs(i, j));
      }
    }
  }
  
  std::cout << island_count << ' ' << max_area << '\n';

  return 0;
}
