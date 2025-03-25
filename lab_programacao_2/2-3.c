#include <stdio.h>

int min(int a, int b) { return (a < b) ? a : b; }
int max(int a, int b) { return (a > b) ? a : b; }

int calculate_interval_sum(int a, int b) {
  int min_value = min(a, b);
  int max_value = max(a, b);

  if (a == b) {
    return min_value;
  }

  return max_value + calculate_interval_sum(min_value, max_value - 1);
}

int main() {
  int a, b;

  scanf("%d %d", &a, &b);

  printf("Soma = %d\n", calculate_interval_sum(a, b));
}