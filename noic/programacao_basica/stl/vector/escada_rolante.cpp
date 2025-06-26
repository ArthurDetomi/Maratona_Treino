#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int calc_tempo_func_escada(int *instantes, int n) {
  if (n == 1) {
    return 10;
  }

  int qtd_tempo_final = 0;

  for (int i = 1; i < n; i++) {
    int sub = instantes[i] - instantes[i - 1];

    if (sub > 10) {
      qtd_tempo_final += 10;
    } else {
      qtd_tempo_final += sub;
    }
  }

  return qtd_tempo_final + 10;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  int instantes[n];

  for (int i = 0; i < n; i++) {
    cin >> instantes[i];
  }

  cout << calc_tempo_func_escada(instantes, n) << endl;

  return 0;
}