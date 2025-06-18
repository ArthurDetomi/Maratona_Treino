#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

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

  int t;

  scanf("%d", &t);

  while (t--) {
    int n;

    scanf("%d", &n);

    int count = -1;

    int result = fib(n, count);

    printf("fib(%d) = %d calls = %d\n", n, count, result);
  }

  return 0;
}