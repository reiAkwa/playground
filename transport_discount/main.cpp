#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 0;
  int s = 0;
  std::cin >> t >> s;

  int fee = s * t;

  if (s > 0 && s < 250) {
    // do nothing
  } else if (s >= 250 && s < 500) {
    fee *= 0.98;
  } else if (s >= 500 && s < 1000) {
    fee *= 0.95;
  } else if (s >= 1000 && s < 2000) {
    fee *= 0.92;
  } else if (s >= 2000 && s < 3000) {
    fee *= 0.90;
  } else if (s >= 3000) {
    fee *= 0.85;
  }

  std::cout << fee << '\n';
}
