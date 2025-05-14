#include <bits/stdc++.h>

using namespace std;

int pot(int k, int n) {
  if (n == 1) {
    return k;
  }

  return k * pot(k, n - 1);
}

int main() {
  int n, k;

  cin >> n >> k;

  cout << pot(n, k) << endl;
  // xxx
  return 0;
}