#include <bits/stdc++.h>
#include <cstring>

bool lights[5][6];
bool result[5][6];

bool isOff() {
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 6; ++j) {
      if (lights[i][j]) {
        return false;
      }
    }
  }

  return true;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  memset(lights, 0,  5 * 6 * sizeof(bool));
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 6; ++j) {
      std::cin >> lights[i][j];
    }
  }

  memset(result, 0,  5 * 6 * sizeof(bool));
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 6; ++j) {
      // toggle lights
      lights[i][j] ^= 1;
      if (i > 0) {
        lights[i - 1][j] ^= 1;
      }
      if (i < 4) {
        lights[i + 1][j] ^= 1;
      }
      if (j > 0) {
        lights[i][j - 1] ^= 1;
      }
      if (j < 5) {
        lights[i][j + 1] ^= 1;
      }
    }

    if (isOff()) {
      break;
    }
  }

  return 0;
}
