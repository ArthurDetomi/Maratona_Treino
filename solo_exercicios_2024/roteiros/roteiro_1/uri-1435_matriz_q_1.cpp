#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

#define MAX 100
#define endl '\n'

void drawSquare(int n) {
  int initialPos = 1;
  int size = n - 1;

  vector<vector<int>> mat(n + 1, vector<int>(n + 1, 1));

  while (size > 0) {
    for (int i = initialPos; i < size; i++) {
      for (int j = initialPos; j < size; j++) {
        mat[i][j]++;
      }
    }

    initialPos++;
    size -= 1;
  }

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
  int n;
  while (true) {
    cin >> n;

    if (n == 0) {
      break;
    }

    drawSquare(n);
  }

  return 0;
}