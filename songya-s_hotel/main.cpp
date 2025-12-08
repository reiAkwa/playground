#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> x(n);
    for(int i = 0; i < n; ++i) cin >> x[i];

    set<int> ans;

    // 两端
    ans.insert(x[0] - d);
    ans.insert(x[n-1] + d);

    // 中间
    for(int i = 0; i < n-1; ++i) {
        int left = x[i] + d;
        int right = x[i+1] - d;
        if(left == right) {
            ans.insert(left);
        } else if(left < right) {
            ans.insert(left);
            ans.insert(right);
        }
    }

    cout << ans.size() << endl;
    return 0;
}
