#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

double solve(int n, double c) {
  if (n == 0) {
    return 0;
  }

  return (solve(n - 1, c) + c) / 2;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;
  double c;

  cin >> n >> c;

  cout << solve(n, c) << endl;

  return 0;
}