#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAX 13

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  int lancamentos[MAX];

  fill(lancamentos, lancamentos + MAX, 0);

  int qtd_max = 0;

  for (int i = 0; i < n; i++) {
    int x;

    cin >> x;

    lancamentos[x]++;

    qtd_max = max(lancamentos[x], qtd_max);
  }

  for (int i = 1; i < MAX; i++) {
    if (lancamentos[i] == qtd_max) {
      cout << i << " ";
    }
  }
  cout << endl;

  return 0;
}