#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, m, x;

  cin >> n;
  cin >> m;

  int album[n + 1];

  fill(album, album + (sizeof(album) / sizeof(int)), -1);

  int qtd_fig_possui = 0;

  for (int i = 0; i < m; i++) {
    cin >> x;

    if (album[x] == -1) {
      qtd_fig_possui++;
      album[x] = 1;
    }
  }

  cout << n - qtd_fig_possui << endl;

  return 0;
}