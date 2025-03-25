#include "function.h"
#include <stdio.h>

int main() {

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