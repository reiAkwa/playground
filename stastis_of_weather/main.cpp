#include <bits/stdc++.h>

using namespace std;

int weathers[10005] = {};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 0;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> weathers[i];
  }

  int clear = 0;
  int cloudy = 0;
  int gray = 0;
  int s_rain = 0;
  int m_rain = 0;
  int b_rain = 0;

  for (int i = 0; i < n; ++i) {
    switch (weathers[i]) {
      case 1:
        ++clear;
        break;
      case 2:
        ++cloudy;
        break;
      case 3:
        ++gray;
        break;
      case 4:
        ++s_rain;
        break;
      case 5:
        ++m_rain;
        break;
      case 6:
        ++b_rain;
        break;
      default:
        exit(-1);
    }
  }

  cout << "晴天: " << clear << '\n';
  cout << "多云: " << cloudy << '\n';
  cout << "阴天: " << gray << '\n';
  cout << "小雨: " << s_rain << '\n';
  cout << "中雨: " << m_rain << '\n';
  cout << "大雨: " << b_rain << '\n';
}
