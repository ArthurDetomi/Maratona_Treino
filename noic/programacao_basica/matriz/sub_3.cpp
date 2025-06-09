#include <bits/stdc++.h>

using namespace std;

#define MAX 3

int main() {
  int value_max = 0, mat[MAX][MAX];
  for (int i = 0; i < MAX; i++) {
    for (int j = 0; j < MAX; j++) {
      cin >> mat[i][j];

      if (i == 0 && j == 0) {
        value_max = mat[i][j];
      }

      value_max = max(mat[i][j], value_max);
    }
  }
  for (int i = 0; i < MAX; i++) {
    for (int j = 0; j < MAX; j++) {
      if (mat[i][j] == value_max) {
        mat[i][j] = -1;
      }
      cout << mat[i][j] << " ";
    }
    cout << '\n';
  }

  return 0;
}
