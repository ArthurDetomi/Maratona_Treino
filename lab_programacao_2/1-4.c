#include "function.h"
#include <stdio.h>

int main() {

  float A, B, C, X1, X2;

  printf("Digite os coeficientes Ex(a b c): \n");
  scanf("%f %f %f", &A, &B, &C);

  int qtd_raizes = raizes(A, B, C, &X1, &X2);

  if (qtd_raizes > 0) {
    printf("A quantidade de raizes é %d, x1 = %.2f, x2 = %.2f\n", qtd_raizes,
           X1, X2);
  } else {
    printf("Não possui raizes reais\n");
  }

  return 0;
}