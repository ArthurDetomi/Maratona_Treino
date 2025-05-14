#include <bits/stdc++.h>

using namespace std;

int mult(int n1, int n2) {
  if (n2 == 1) {
    return n1;
  }

  return n1 + mult(n1, n2 - 1);
}

int main() {
  // xxx
  int n1, n2;

  cin >> n1 >> n2;

  cout << mult(n1, n2) << endl;

  return 0;
}