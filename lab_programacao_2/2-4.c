#include <stdio.h>

int mult(int m, int n) {
  if (n == 0) {
    return 0;
  }

  return m + mult(m, n - 1);
}

int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  printf("%d x %d = %d\n", a, b, mult(a, b));

  return 0;
}