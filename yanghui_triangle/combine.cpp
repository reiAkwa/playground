#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 0;
  int i = 0;

  cin >> n >> i;

  int res = 1;
  for (int j = 1; j < i; j++) {
    cout << "j = " << j << '\n';
    cout << "res = " << res << '\n';
    res *= ((n - j) / j);
  }

  cout << res;
  
  return 0;
}
