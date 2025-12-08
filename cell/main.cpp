#include <iostream>
using namespace std;
int totalCells(int n);  //请补充完整的函数声明语句
int main() {
    int n = 0;
    cin >> n;
    cout << totalCells(n); //请补充完整的函数调用语句
    return 0;
}
int totalCells(int n) {
  int count = 1;
  int should_die = 0;
  for (int i = 1, j = 1; i <= n; ++i) {
    count *= 2;

    if (i - j == 3) {
      count -= should_die;
      should_die = count;
      ++j;
    }

  }

  return count;
}