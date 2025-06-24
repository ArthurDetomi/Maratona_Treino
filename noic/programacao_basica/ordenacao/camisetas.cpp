#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

class Camiseta {
public:
  string nome_dono, cor;
  char tamanho;

  void imprimir() {
    printf("%s %c %s\n", this->cor.c_str(), this->tamanho,
           this->nome_dono.c_str());
  }

  int get_tamanho_value() {
    switch (this->tamanho) {
    case 'P':
      return 0;
    case 'M':
      return 1;
    case 'G':
      return 2;
    }

    return -1;
  }
};

bool compara(Camiseta c1, Camiseta c2) {
  if (c1.cor < c2.cor) {
    return true;
  }

  if (c2.cor < c1.cor) {
    return false;
  }

  if (c1.get_tamanho_value() < c2.get_tamanho_value()) {
    return true;
  }

  if (c2.get_tamanho_value() < c1.get_tamanho_value()) {
    return false;
  }

  if (c1.nome_dono < c2.nome_dono) {
    return true;
  }

  if (c2.nome_dono < c1.nome_dono) {
    return false;
  }

  return true;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int first = 0;

  while (true) {
    int n;

    cin >> n;

    if (n == 0)
      break;

    if (first != 0) {
      printf("\n");
    }

    first = 1;

    vector<Camiseta> camisetas;

    for (int i = 0; i < n; i++) {
      Camiseta c;

      cin.ignore();

      getline(cin, c.nome_dono);
      cin >> c.cor >> c.tamanho;

      camisetas.push_back(c);
    }

    sort(camisetas.begin(), camisetas.end(), compara);

    for (int i = 0; i < n; i++) {
      camisetas[i].imprimir();
    }
  }

  return 0;
}