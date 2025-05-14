#include <stdio.h>

void rec_hanoi(int n, char origem, char dest, char trab) {
  if (n > 0) {
    rec_hanoi(n - 1, origem, trab, dest);
    printf("Mova o disco %d do pino %c para %c\n", n, origem, dest);
    rec_hanoi(n - 1, trab, dest, origem);
  }
}

int main() {
  int discos;
  printf("Digite a quantidade de discos:\n");
  scanf("%d", &discos);
  printf("-------RECURSIVO--------\n");
  rec_hanoi(discos, 'A', 'C', 'B');
  printf("---------------------------------------\n");
  return 0;
}