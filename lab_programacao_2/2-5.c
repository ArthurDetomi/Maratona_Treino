#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

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

void print_array_crescent(int *arr, int n) {
  if (n == 0) {
    return;
  }

  printf("%d\n", arr[0]);

  print_array_crescent(arr + 1, n - 1);
}

void print_array_decreasing(int *arr, int n) {
  if (n == 0) {
    return;
  }

  print_array_decreasing(arr + 1, n - 1);

  printf("%d\n", arr[0]);
}

int find_max(int *arr, int n) {
  if (n == 1) {
    return arr[0];
  }

  int max = find_max(arr + 1, n - 1);

  return (arr[0] > max) ? arr[0] : max;
}

int main() {
  int arr[SIZE] = {0};

  srand(time(NULL));

  printf("Array antes de ser preenchido...\n");
  print_array(arr, SIZE);

  fill_array(arr, SIZE);

  printf("Array após ser preenchido...\n");
  print_array(arr, SIZE);

  printf("\nEm ordem crescente usando recursão...\n");
  print_array_crescent(arr, SIZE);

  printf("\nEm ordem decrescente usando recursão...\n");
  print_array_decreasing(arr, SIZE);

  int max_value = find_max(arr, SIZE);
  printf("O maior valor é: %d\n", max_value);

  return 0;
}