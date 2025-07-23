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

  int N, K;

  cin >> N >> K;

  vector<string> V;

  while (N--) {
    string nome;

    cin >> nome;

    V.push_back(nome);
  }

  sort(V.begin(), V.end());

  cout << V[K - 1] << endl;

  return 0;
}