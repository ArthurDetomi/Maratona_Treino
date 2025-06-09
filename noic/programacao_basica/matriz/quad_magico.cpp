#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAX 3

int sum_linhas[MAX], sum_colunas[MAX], mat[MAX][MAX], sum_dig_1 = 0,
                                                      sum_dig_2 = 0;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int idx = MAX - 1;

  for (int i = 0; i < MAX; i++) {
    for (int j = 0; j < MAX; j++) {
      cin >> mat[i][j];

      sum_colunas[j] += mat[i][j];

      sum_linhas[i] += mat[i][j];

      if (i == j) {
        sum_dig_1 += mat[i][j];
      }

      if (j == idx) {
        sum_dig_2 += mat[i][j];
      }
    }
    idx--;
  }

  int is_quadrado_magico = true;

  for (int i = 0; i < MAX; i++) {
    if (sum_linhas[i] != sum_dig_1 || sum_colunas[i] != sum_dig_1 ||
        sum_dig_1 != sum_dig_2) {
      is_quadrado_magico = false;
      break;
    }
  }

  if (is_quadrado_magico) {
    cout << "SIM\n";
  } else {
    cout << "NAO\n";
  }

  return 0;
}