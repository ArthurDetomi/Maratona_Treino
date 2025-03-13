#include <algorithm>
#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int fib(int n, int &count) {
  count++;

  if (n <= 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  return fib(n - 1, count) + fib(n - 2, count);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T, n;

  scanf("%d", &T);

  while (T--) {
    int count = -1;

    scanf("%d", &n);

    int result = fib(n, count);

    printf("fib(%d) = %d calls = %d\n", n, count, result);
  }

  return 0;
}