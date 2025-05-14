#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
  if (n <= 1) {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
}

int main() {
  int n;

  scanf("%d", &n);

  printf("%d\n", fib(n));

  // xxx
  return 0;
}