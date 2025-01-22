#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int memo[100][100];

int binomial(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  }
  if (memo[n][k] != -1) {
    return memo[n][k];
  }

  memo[n][k] = binomial(n - 1, k - 1) + binomial(n - 1, k);

  return memo[n][k];
}

int main() {
  memset(memo, -1, sizeof(memo));

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  cout << binomial(n, k) << endl;

  return 0;
}