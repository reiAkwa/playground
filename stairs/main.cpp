#include <iostream>

using namespace std;

int stairs(int n);  //请补充完整的函数声明语句

int main() {
    int n = 0;
    cin >> n;
    cout << stairs(n); //请补充完整的函数调用语句
    return 0;
}

int stairs(int n) {
  int dp[45][2] = {};

  dp[0][0] = 1;
  dp[0][1] = 0;

  for (int i = 0; i <= n; ++i) {
    if (i + 1 <= n) {
      dp[i + 1][0] += dp[i][1];
      dp[i + 1][1] += dp[i][0];
    }

    if (i + 2 <= n) {
      dp[i + 2][0] += dp[i][1];
      dp[i + 2][1] += dp[i][0];
    }
  }

  return dp[n][1];
}
