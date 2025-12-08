#include <bits/stdc++.h>
using namespace std;

static int diffArr[600005 + 5];
static int cover[600005 + 5];
static long long cnt[200000 + 5];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int maxR = 0;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        diffArr[l] += 1;
        diffArr[r + 1] -= 1;
        maxR = max(maxR, r);
    }

    // build prefix sum to get coverage
    for (int i = 0; i <= maxR; i++) {
        if (i == 0) cover[i] = diffArr[i];
        else cover[i] = cover[i - 1] + diffArr[i];
    }

    // count
    for (int i = 0; i <= maxR; i++) {
        if (cover[i] > 0)
            cnt[cover[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        cout << cnt[i];
        if (i < n) cout << ' ';
    }
}
