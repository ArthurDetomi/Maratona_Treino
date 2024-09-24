#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

#define endl '\n'

#define MAX_N 46

int fib[MAX_N], N;

void fillArrayWithFibonaciSeq() {
  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i < MAX_N; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
}

void printArrayUpToN() {
  for (int i = 0; i < N; i++) {
    printf("%d", fib[i]);

    if (i != N - 1) {
      printf(" ");
    }
  }
  printf("\n");
}

int main() {
  fillArrayWithFibonaciSeq();

  scanf("%d", &N);

  printArrayUpToN();

  return 0;
}