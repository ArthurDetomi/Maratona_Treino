#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

class Rena {
public:
  string nome;
  int idade, peso;
  double altura;
};

// Forma decrescnte por peso, ou ascendente idade, ou ascendente altura, ou
// ascendente por nome
bool compara(Rena rena1, Rena rena2) {
  if (rena1.peso > rena2.peso) {
    return true;
  }

  if (rena2.peso > rena1.peso) {
    return false;
  }

  if (rena1.idade < rena2.idade) {
    return true;
  }

  if (rena2.idade < rena1.idade) {
    return false;
  }

  if (rena1.altura < rena2.altura) {
    return true;
  }

  if (rena2.altura < rena1.altura) {
    return false;
  }

  return rena1.nome < rena2.nome;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;

  cin >> t;

  int teste = 0;

  while (t--) {
    int n, m;

    cin >> n >> m;

    vector<Rena> renas(n);

    for (int i = 0; i < n; i++) {
      cin >> renas[i].nome >> renas[i].peso >> renas[i].idade >> renas[i].altura;
    }

    sort(renas.begin(), renas.end(), compara);

    printf("CENARIO {%d}\n", ++teste);
    for (int i = 0; i < m; i++) {
      printf("%d - %s\n", i + 1, renas[i].nome.c_str());
    }
  }

  return 0;
}