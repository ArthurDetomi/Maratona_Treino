#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAX 101

int caminho[MAX];

void marcar_caminho(int inicio, int distancia, int tam) {
  for (int i = inicio; i <= tam; i += distancia) {
    caminho[i] = 1;
  }
  for (int i = inicio; i >= 1; i -= distancia) {
    caminho[i] = 1;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, p, d;

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    cin >> p >> d;

    marcar_caminho(p, d, n);
  }

  for (int i = 1; i <= n; i++) {
    if (caminho[i] == 1) {
      cout << 1;
    } else {
      cout << 0;
    }
    cout << endl;
  }
  return 0;
}