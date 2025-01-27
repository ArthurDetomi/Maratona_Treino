#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

void empilha_sol(int n) {
  if (n == 0) {
    return;
  }

  int result = n / 2;

  empilha_sol(result);
  int resto = n % 2;

  printf("%d %d\n", result, resto);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n = 100;

  scanf("%d", &n);

  empilha_sol(n);

  return 0;
}