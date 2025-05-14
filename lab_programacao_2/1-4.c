#include <math.h>
#include <stdio.h>

double calculate_delta(float a, float b, float c) {
  return pow(b, 2) - 4 * a * c;
}

// Retorna 1 se existem raizes e 0 caso não exista preenche X1 e X2 caso tenha
// raízes
int raizes(float A, float B, float C, float *X1, float *X2) {
  double delta = calculate_delta(A, B, C);

  if (delta < 0) {
    return 0;
  }

  *X1 = (-B + sqrt(delta)) / (2 * A);
  *X2 = (-B - sqrt(delta)) / (2 * A);

  return (delta == 0.0) ? 1 : 2;
}

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