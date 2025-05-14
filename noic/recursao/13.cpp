#include <bits/stdc++.h>

using namespace std;

void decreasing(int n) {
  if (n == 0) {
    return;
  }

  cout << n << endl;

  decreasing(n - 1);
}

int main() {
  decreasing(10);

  // xxx
  return 0;
}