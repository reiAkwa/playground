#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> r(n);
    for (int i = 0; i < n; i++) cin >> r[i];
    
    vector<set<int>> conflicts(n); // 记录每只猴子的冲突对象
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--; // 转成0-index
        conflicts[x].insert(y);
        conflicts[y].insert(x);
    }
    
    vector<int> ans(n, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (r[i] > r[j] && conflicts[i].count(j) == 0) {
                ans[i]++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n-1 ? "\n" : " ");
    }
    
    return 0;
}
