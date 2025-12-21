#include <bits/stdc++.h>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    int islandCount = 0;
    int maxArea = 0;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                islandCount++;
                int area = 0;

                queue<pair<int, int>> q;
                q.push({i, j});
                grid[i][j] = '0'; // 标记访问

                while (!q.empty()) {
                    std::pair<int, int> pair = q.front();
                    int x = pair.first;
                    int y = pair.second;
                    q.pop();
                    area++;

                    for (int d = 0; d < 4; d++) {
                        int nx = x + dx[d];
                        int ny = y + dy[d];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m
                            && grid[nx][ny] == '1') {
                            grid[nx][ny] = '0';
                            q.push({nx, ny});
                        }
                    }
                }

                maxArea = max(maxArea, area);
            }
        }
    }

    cout << islandCount << " " << maxArea << "\n";
    return 0;
}
