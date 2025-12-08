#include <iostream>

using namespace std;
int getCandy(int, int);

int main() {
  int k, r;
  cin>>k>>r;

  int result = getCandy(k, r);
  cout<<result<<endl;
  return 0;
}

int getCandy(int k, int r) {
  if (k % 10 == 0) { return 1; }

  int n = k - r;
  int i = 0;
  while (i * 10 / k != 0) {
    ++i;
  }
  
  return i * 10 / k;
}
