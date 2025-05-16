#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int p[] = {1, 5, 8, 10};

int rodCutter(int n) {
  int rod[n + 1];
  rod[0] = 0;

  for (int i = 1; i <= n; i++) {
    int max_val = -999999;

    for (int j = 1; j <= i; j++) {
      max_val = max(max_val, p[j] + rod[i - j]);
    }
    rod[i] = max_val;
  }

  return rod[n];
}

int main() {
  int n = 10;

  cout << rodCutter(n) << endl;
  return 0;
}