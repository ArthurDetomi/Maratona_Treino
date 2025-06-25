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

  int n;

  cin >> n;

  vector<int> fila(n);

  for (int i = 0; i < n; i++) {
    cin >> fila[i];
  }

  unordered_set<int> marked_get_out;

  int m;

  cin >> m;

  for (int i = 0; i < m; i++) {
    int y;

    cin >> y;

    marked_get_out.insert(y);
  }

  vector<int> fila_final;

  for (int i = 0; i < n; i++) {
    if (marked_get_out.count(fila[i]) == 0) {
      fila_final.pb(fila[i]);
    }
  }

  for (int i = 0; i < (int)fila_final.size(); i++) {
    cout << fila_final[i];
    if (i != n - 1) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}