#include <stdio.h>
#include <stdlib.h>

int generate_random_number(int max) { return rand() % max + 1; }

void print_array(int *vet, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");
}

void fill_array(int *arr, int n) {
  if (n == 0) {
    return;
  }

  arr[0] = generate_random_number(100);

  fill_array(arr + 1, n - 1);
}

int main() {
  int arr[10];

  printf("Array antes de ser preenchido...\n");
  print_array(arr, 10);

  fill_array(arr, 10);

  printf("Array após ser preenchido...\n");
  print_array(arr, 10);

  printf("Em ordem crescente usando recursão...\n");

  printf("Em ordem decrescente usando recursão...\n");

  return 0;
}