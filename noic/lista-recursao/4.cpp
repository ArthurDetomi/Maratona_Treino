#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int comb(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  }

  return comb(n - 1, k - 1) + comb(n - 1, k);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, k;

  cin >> n >> k;

  cout << comb(n, k) << endl;

  return 0;
}