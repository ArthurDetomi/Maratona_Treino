#include "function.h"
#include <stdio.h>

int main() {
  float vet[] = {1.0f, -2.0f, 4.0f, 0.2f, -2.1f, 1.2f};

  printf("Qtd de valores negativos = %d\n",
         negativos(vet, sizeof(vet) / sizeof(int)));

  return 0;
}