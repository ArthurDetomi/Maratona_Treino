#include <stdio.h>

int negativos(float *vet, int n) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (vet[i] < 0) {
      count++;
    }
  }

  return count;
}

int main() {
  float vet[] = {1.0f, -2.0f, 4.0f, 0.2f, -2.1f, 1.2f};

  printf("Qtd de valores negativos = %d\n",
         negativos(vet, sizeof(vet) / sizeof(int)));

  return 0;
}