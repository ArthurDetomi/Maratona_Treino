#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

void drawMatrizOneTwoThree(int n) {
  int aux = n - 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int number = 3;
      if (j == aux) {
        number = 2;
      } else if (i == j) {
        number = 1;
      }

      printf("%d", number);
    }
    printf("\n");

    aux--;
  }
}

int main() {
  fastio;

  int n;

  while (cin >> n) {
    drawMatrizOneTwoThree(n);
  }

  return 0;
}
