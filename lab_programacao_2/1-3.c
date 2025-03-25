#include "function.h"
#include <stdio.h>

int main() {
  aluno alunos[3];
  char c;
  for (int i = 0; i < 3; i++) {
    aluno a;

    printf("Aluno %d cadastro:\n", i + 1);
    printf("Matricula :");
    scanf("%d", &a.matricula);
    printf("Nome:");

    c = getchar();
    gets(a.nome);

    printf("Nota:");
    scanf("%lf", &a.nota);
    printf("\n");

    alunos[i] = a;
  }

  printf("\n");
  print_names_min_and_max_grade(alunos, 3);

  return 0;
}