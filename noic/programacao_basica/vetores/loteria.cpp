#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAX 101

int tabela[MAX];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 6; i++) {
    int x;

    cin >> x;

    tabela[x] = 1;
  }

  int qtd_acertos = 0;
  for (int i = 0; i < 6; i++) {
    int x;

    cin >> x;

    if (tabela[x] == 1) {
      qtd_acertos++;
    }
  }

  switch (qtd_acertos) {
  case 3:
    cout << "terno\n";
    break;
  case 4:
    cout << "quadra\n";
    break;
  case 5:
    cout << "quina\n";
    break;
  case 6:
    cout << "sena\n";
    break;
  default:
    cout << "azar\n";
    break;
  }

  return 0;
}