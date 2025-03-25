#include "function.h"
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int n) {
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (vet[i] < 0) {
      count++;
    }
  }

  return count;
}

int generate_random_number(int max) { return rand() % max + 1; }

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

void print_array(int *vet, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");
}

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