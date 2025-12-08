#include <bits/stdc++.h>

struct TimePoint {
  int hh;
  int mm;

  TimePoint(int hh_, int mm_) :
    hh(hh_),
    mm(mm_) {}

  TimePoint() : hh(0), mm(0) {}
};

int operator-(TimePoint lhs, TimePoint rhs) {
  int res =  abs((lhs.hh * 60 + lhs.mm) - (rhs.hh * 60 + rhs.mm));
  if (res > 12 * 60) {
    res = 24 * 60 - res;
  }

  return res;
}

TimePoint tps[1005];

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    int hh = 0;
    int mm = 0;
    char _ = 0;

    std::cin >> hh >> _ >> mm;
    tps[i] = TimePoint(hh, mm);
  }

  int min_diff = 114514;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (i == j) {
        continue;
      }

      int diff = tps[i] - tps[j];
      if (diff < min_diff) {
        min_diff = diff;
      }
    }
  }

  std::cout << min_diff << '\n';

  return 0;
}
