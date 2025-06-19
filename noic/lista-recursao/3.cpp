#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int soma_pa(int n, const int a1, const int r) {
  if (n == 1) {
    return a1;
  }

  return (a1 + (n - 1) * r) + soma_pa(n - 1, a1, r);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, a1, r;

  cin >> a1 >> n >> r;

  cout << soma_pa(n, a1, r) << endl;

  return 0;
}