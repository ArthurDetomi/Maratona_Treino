#include <bits/stdc++.h>
#include <functional>
#include <queue>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define pii pair<int, int>

struct MeuComparador {
  bool operator()(const pii &a, const pii &b) const {
    if (a.first == b.first)
      return a.second > b.second;
    return a.first > b.first;
  }
};

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, T;

  cin >> N >> T;

  vector<int> qtds_ligacoes(N, 0);

  priority_queue<pii, vector<pii>, MeuComparador> fila;

  for (int i = 0; i < N; i++) {
    fila.push({0, i});
  }

  while (T--) {
    int l;

    cin >> l;

    pii menor = fila.top();
    int id_vendedor = menor.second;

    // Atendeu uma ligacao
    qtds_ligacoes[id_vendedor]++;

    menor.first += l; 

    fila.pop();
    fila.push(menor);
  }

  // Response

  for (int i = 0; i < N; i++) {
    printf("%d %d\n", i + 1, qtds_ligacoes[i]);
  }

  return 0;
}