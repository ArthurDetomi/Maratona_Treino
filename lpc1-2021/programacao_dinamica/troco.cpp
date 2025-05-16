#include <bits/stdc++.h>

using namespace std;

#define pii pair<int, int>

vector<int> moedas = {50, 25, 10, 5, 1};
map<int, int> memo;

void show_memo() {
  if (memo.size() == 0) {
    return;
  }

  printf("Show Memo\n");
  for (pii p : memo) {
    printf("%d -> %d\n", p.first, p.second);
  }
  printf("\n");
}

void show_matriz(vector<int> v) {
  if (v.size() == 0) {
    return;
  }

  printf("Show Matriz\n");
  for (int value : v) {
    printf("%d ", value);
  }
  printf("\n");
}

int troco(int x) {
  if (x == 0) {
    return 0;
  }

  show_memo();

  if (memo.count(x)) {
    return memo[x];
  }

  memo[x] = INT_MAX;
  for (int m : moedas) {
    if (m > x) {
      continue;
    }

    memo[x] = min(memo[x], 1 + troco(x - m));
  }

  return memo[x];
}

int troco_bu(int w) {
  int n = moedas.size();
  vector<int> dp(w + 1, INT_MAX);
  dp[0] = 0;
  for (int i = 1; i <= w; i++) {
    for (int j = 0; j < n; j++) {
      show_matriz(dp);
      if (moedas[j] <= i) {
        dp[i] = min(dp[i], dp[i - moedas[j]] + 1);
      }
    }
  }
  return dp[w];
}

int main() {
  int n = 16;

  printf("Result = %d\n", troco(n));

  printf("Result = %d\n", troco_bu(n));

  return 0;
}