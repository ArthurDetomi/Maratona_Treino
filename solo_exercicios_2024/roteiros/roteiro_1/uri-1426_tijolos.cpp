#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

#define MAX 9
#define endl '\n'

void fillLastLineFromMatrix(vector<vector<int>> &mat) {
  int lastLine = MAX - 1;

  for (int j = 1; j <= 7; j += 2) {
    mat[lastLine][j] = (mat[lastLine - 2][j - 1] - mat[lastLine][j - 1] -
                        mat[lastLine][j + 1]) /
                       2;
  }
}

void fillMatrix(vector<vector<int>> &mat) {
  fillLastLineFromMatrix(mat);

  int penultimateLine = MAX - 2;

  for (int i = penultimateLine; i >= 0; i--) {
    for (int j = 0; j < MAX; j++) {
      mat[i][j] = mat[i + 1][j] + mat[i + 1][j + 1];
    }
  }
}

void printMatrix(const vector<vector<int>> mat) {
  for (int i = 0; i < MAX; i++) {
    for (int j = 0; j < i + 1; j++) {
      printf("%d%c", mat[i][j], " \n"[j == i]);
    }
  }
}

int main() {
  int n;

  cin >> n;

  while (n--) {
    vector<vector<int>> mat(MAX, vector<int>(MAX, 0));

    for (int i = 0; i < MAX; i += 2) {
      for (int j = 0; j < i + 1; j += 2) {
        cin >> mat[i][j];
      }
    }

    fillMatrix(mat);

    printMatrix(mat);
  }

  return 0;
}
