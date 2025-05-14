#include <bits/stdc++.h>

using namespace std;

int inverte(int n, int acc) {
  if (n == 0) {
    printf("Base case: acc = %d\n", acc);
    return acc;
  }

  int last_digit = n % 10;

  int n_acc = acc * 10 + last_digit;

  printf("last_digit = %d, n_acc = %d, acc = %d\n", last_digit, n_acc, acc);

  return inverte(n / 10, n_acc);
}

int main() {
  int n;
  scanf("%d", &n);

  printf("%d\n", inverte(n, 0));
  // xxx
  return 0;
}