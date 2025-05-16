#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000

vector<int> memo(MAXN, -1);

vector<int> memo_bu(MAXN);

// Top down
int fib(int n) {
  if (n <= 1) {
    return 1;
  }

  if (memo[n] != -1) {
    return memo[n];
  }

  memo[n] = fib(n - 1) + fib(n - 2);

  return memo[n];
}

// Bottom up
void preprocess() {
  memo_bu[0] = memo_bu[1] = 1;

  for (int i = 2; i < MAXN; i++) {
    memo_bu[i] = memo_bu[i - 1] + memo_bu[i - 2];
  }
}

int fib_bup(int n) { return memo_bu[n]; }

int main() {
  preprocess();

  int n;

  cin >> n;

  cout << fib(n) << endl;

  cout << fib_bup(n) << endl;

  return 0;
}