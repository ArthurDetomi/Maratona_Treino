#include <bits/stdc++.h>

using namespace std;

#define l long long

#define MAXN 1000001

#define MOD 1000000007

vector<l> memo(MAXN, -1);

l combinations_count(int i) {
  if (i == 0 || i == 1) {
    return 1;
  }

  if (memo[i] != -1) {
    return memo[i];
  }

  memo[i] = 0;

  for (int j = 1; j <= 6; j++) {
    if (i - j >= 0)
      memo[i] = (memo[i] + combinations_count(i - j)) % MOD;
  }

  return memo[i];
}

l combinations_bottom_up(int n) {
  memo[0] = memo[1] = 1;

  for (int i = 1; i <= n; i++) {
    memo[i] = 0;
    for (int j = 1; j <= 6; j++) {
      if (i - j >= 0)
        memo[i] = (memo[i] + memo[i - j]) % MOD;
    }
  }

  return memo[n];
}

int main() {
  int n;

  cin >> n;

  cout << combinations_bottom_up(n) << endl;

  return 0;
}