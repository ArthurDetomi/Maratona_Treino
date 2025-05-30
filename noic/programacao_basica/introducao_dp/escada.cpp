#include <bits/stdc++.h>

using namespace std;

void show_array(const vector<int> array) {
  for (auto v : array)
    printf("%d ", v);
  printf("\n");
}

int solve(vector<int> caminho, int n) {
  int atual = caminho.back(), ans = 0;

  if (atual + 1 <= n) {
    caminho.push_back(atual + 1);
    ans += solve(caminho, n);
    caminho.pop_back();
  }

  if (atual + 2 <= n) {
    caminho.push_back(atual + 2);
    ans += solve(caminho, n);
    caminho.pop_back();
  }

  if (atual == n) {
    show_array(caminho);
    ++ans;
  }

  return ans;
}

int main() {
  int n;
  scanf("%d", &n);

  printf("resultado = %d\n", solve({1}, n));

  return 0;
}