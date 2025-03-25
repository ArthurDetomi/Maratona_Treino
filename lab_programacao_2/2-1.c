#include <stdio.h>

void print_ascending_order(int n) {
  if (n == 0) {
    return;
  }
  print_ascending_order(n - 1);
  printf("%d\n", n);
}

void print_descending_order(int n) {
  if (n == 0) {
    return;
  }

  printf("%d\n", n);

  print_descending_order(n - 1);
}

int main() {
  printf("Ascending order:\n");
  print_ascending_order(5);

  printf("\n");

  printf("Descending order:\n");
  print_descending_order(5);

  return 0;
}