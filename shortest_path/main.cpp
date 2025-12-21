#include <bits/stdc++.h>

struct Node {
  int x;
  int y;
};

int map[10005][10005];

int dd[2][4] = {
  {1, -1, 0, 0},
  {0, 0, 1, -1},
};

int m = 0;
int n = 0;

int dfs(int x, int y) {
  if (x == m && y == n) {
    return 1;
  }
  if (map[x][y] == 1 || map[x][y] == -1) {
    return 0;
  }

  map[x][y] = -1;

  int len = 0;
  for (int i = 0; i < 4; ++i) {
    if (x + dd[0][i] >= 1 && x + dd[0][i] <= m && y + dd[1][i] >= 1 && y + dd[1][i] <= n) {
      len += dfs(x + dd[0][i], y + dd[1][i]);
    } 
  }

  return len;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::cin >> m >> n;

  for (int i = 1; i <= m; ++i) {
    for (int j = 1; j <= n; ++j) {
      std::cin >> map[i][j];
    }
  }

  return dfs(1, 1);

  return 0;
}
