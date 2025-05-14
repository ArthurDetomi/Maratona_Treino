#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
  int matricula;
  char nome[50];
  double nota;
} aluno;

void printf_aluno(aluno a) {
  printf("Nome: %s\nMatricula:%d\nNota:%.2lf\n\n", a.nome, a.matricula, a.nota);
}

int find_index_min_value_array(double *arr, int n) {
  int index = 0;

  double min = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
      index = i;
    }
  }

  return index;
}

int find_index_max_value_array(double *arr, int n) {
  int index = 0;

  double max = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
      index = i;
    }
  }

  return index;
}

void print_names_min_and_max_grade(aluno *alunos, int n) {
  double *notas = (double *)malloc(n * sizeof(double));

  for (int i = 0; i < n; i++) {
    printf("nota = %lf\n", alunos[i].nota);
    notas[i] = alunos[i].nota;
  }

  int min_index_pos = find_index_min_value_array(notas, n);
  int max_index_pos = find_index_max_value_array(notas, n);

  printf("Aluno com menor nota:\n");
  printf_aluno(alunos[min_index_pos]);
  printf("Aluno com maior nota:\n");
  printf_aluno(alunos[max_index_pos]);

  free(notas);
  notas = NULL;
}

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