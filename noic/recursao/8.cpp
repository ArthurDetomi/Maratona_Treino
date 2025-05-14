#include <bits/stdc++.h>

using namespace std;

int mdc(int x, int y) {
  if (y == 0) {
    return x;
  }

  return mdc(y, x % y);
}

int main() {
  // xxx
  int x, y;

  cin >> x >> y;

  cout << mdc(x, y) << endl;

  return 0;
}