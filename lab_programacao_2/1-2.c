#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_number(int max) { return rand() % max + 1; }

void print_array(int *vet, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");
}

void fill_array(int *vet, int n) {
  for (int i = 0; i < n; i++) {
    vet[i] = generate_random_number(100);
  }
}

int get_max_value_from_array(int *vet, int n) {
  int max = INT_MIN;

  for (int i = 0; i < n; i++) {
    if (vet[i] > max) {
      max = vet[i];
    }
  }

  return max;
}

int get_min_value_from_array(int *vet, int n) {
  int min = INT_MAX;

  for (int i = 0; i < n; i++) {
    if (vet[i] < min) {
      min = vet[i];
    }
  }

  return min;
}

double get_median_from_array(int *vet, int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += vet[i];
  }

  return (double)sum / n;
}

int main() {
  srand(time(NULL));

  int vet[10];

  int n = sizeof(vet) / sizeof(int);

  fill_array(vet, n);

  print_array(vet, n);
  printf("Maior elemento do vetor = %d\n", get_max_value_from_array(vet, n));
  printf("Menor elemento do vetor = %d\n", get_min_value_from_array(vet, n));
  printf("Media dos elementos do vetor = %.2lf\n",
         get_median_from_array(vet, n));

  return 0;
}