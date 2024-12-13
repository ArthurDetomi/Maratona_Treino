#include <bits/stdc++.h>
#include <iomanip>

#define endl '\n'

using namespace std;

#define MAX_NOTAS 7

double calcula_nota(double notas[7], double grau_dificuldade) {
  sort(notas, notas + MAX_NOTAS);

  double sum = 0;

  for (int i = 1; i < 6; i++) {
    sum += notas[i];
  }

  return sum * grau_dificuldade;
}

int main() {

  int N;

  cin >> N;

  for (int i = 0; i < N; i++) {
    string nome;
    double notas[MAX_NOTAS], grau_dificuldade;

    cin >> nome;
    cin >> grau_dificuldade;

    for (int i = 0; i < MAX_NOTAS; i++) {
      cin >> notas[i];
    }

    std::cout << std::fixed << std::setprecision(2);
    cout << nome << " " << calcula_nota(notas, grau_dificuldade) << endl;
  }

  return 0;
}