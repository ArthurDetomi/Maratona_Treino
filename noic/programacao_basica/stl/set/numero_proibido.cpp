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

  unsigned N, P;

  unordered_set<unsigned> S;

  cin >> N;

  while (N--) {
    cin >> P;

    S.insert(P);
  }

  unsigned X;

  while (cin >> X) {
    if (S.count(X) > 0) {
      cout << "sim\n";
    } else {
      cout << "nao\n";
    }
  }

  return 0;
}