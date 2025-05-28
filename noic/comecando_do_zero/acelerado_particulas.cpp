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

  int D;

  cin >> D;

  unordered_map<int, int> M;

  M.insert({5, 3});
  M.insert({4, 2});
  M.insert({3, 1});

  D -= 3;

  if (D <= 5) {
    cout << M[D] << endl;
  } else {
    int mod = D % 8;

    cout << M[mod] << endl;
  }

  return 0;
}