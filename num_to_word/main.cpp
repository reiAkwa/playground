#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  char n = 0;
  std::cin >> n;

  switch (n) {
    case '0':
      std::cout << "Zero";
      break;
    case '1':
      std::cout << "One";
      break;
    case '2':
      std::cout << "Two";
      break;
    case '3':
      std::cout << "Three";
      break;
    case '4':
      std::cout << "Four";
      break;
    case '5':
      std::cout << "Five";
      break;
    case '6':
      std::cout << "Six";
      break;
    case '7':
      std::cout << "Seven";
      break;
    case '8':
      std::cout << "Eight";
      break;
    case '9':
      std::cout << "Nine";
      break;
    default:
      std::cout << "Other";
      break;
  }
}
