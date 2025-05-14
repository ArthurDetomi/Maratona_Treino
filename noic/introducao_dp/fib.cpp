#include <bits/stdc++.h>

using namespace std;

#define maxn 10010

long long n, dp[maxn];
bool marked[maxn];

long long fib(int x) {
  if (x <= 1) {
    return 1;
  }

  if (marked[x] == 1) {
    return dp[x];
  }

  marked[x] = 1;

  dp[x] = fib(x - 1) + fib(x - 2);

  return dp[x];
}

int main() {
  scanf("%lld", &n);
  printf("Resultado = %lld\n", fib(n));
  return 0;
}