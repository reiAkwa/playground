#include <bits/stdc++.h>

using namespace std;

int main() {
  int n1 = 0;
  int n2 = 0;

  cin >> n1 >> n2;

  cout << n1 << '+' << n2 << '=' << n1 + n2 << '\n';
  cout << n1 << '-' << n2 << '=' << n1 - n2 << '\n';
  cout << n1 << '*' << n2 << '=' << n1 * n2 << '\n';
  cout << fixed << setprecision(2) << n1 << '/' << n2 << '=' << (double)n1 / (double)n2 << '\n';
  cout << n1 << '%' << n2 << '=' << n1 % n2 << '\n';
}
