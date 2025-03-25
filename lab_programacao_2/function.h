#ifndef FUNCTION_H
#define FUNCTION_H

typedef struct aluno {
  int matricula;
  char nome[50];
  double nota;
} aluno;

int negativos(float *vet, int n);
void fill_array(int *vet, int n);
int get_max_value_from_array(int *vet, int n);
int get_min_value_from_array(int *vet, int n);
double get_median_from_array(int *vet, int n);
void print_array(int *vet, int n);
void print_names_min_and_max_grade(aluno *alunos, int n);
int raizes(float A, float B, float C, float *X1, float *X2);

#endif