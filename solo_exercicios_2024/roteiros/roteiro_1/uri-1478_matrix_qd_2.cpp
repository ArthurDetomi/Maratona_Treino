#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define MAX 101
#define endl '\n'

int mat[MAX][MAX];

void fillMatrix() {
  for (int i = 0; i < MAX; i++) {
    mat[i][i] = 1;
  }

  for (int i = 0; i < MAX; i++) {

    // Going down
    for (int j = i + 1; j < MAX; j++) {
      int previusPosition = mat[j - 1][i];

      mat[j][i] = previusPosition + 1;
    }

    // Going up
    for (int j = i - 1; j >= 0; j--) {
      int previusPosition = mat[j + 1][i];

      mat[j][i] = previusPosition + 1;
    }
  }
}

void printMatrix(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j != n - 1) {
        printf("%3d ", mat[i][j]);
      } else {
        printf("%3d", mat[i][j]);
      }
    }
    printf("\n");
  }
  printf("\n");
}

int main() {
  fastio;

  fillMatrix();

  int n;

  while (true) {
    cin >> n;

    if (n == 0) {
      break;
    }

    printMatrix(n);
  }

  return 0;
}
