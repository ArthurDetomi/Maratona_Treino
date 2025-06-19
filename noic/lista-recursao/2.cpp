#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int soma_impares(int n) {
  if (n == 1) {
    return 1;
  }

  if (n % 2 == 0) {
    return soma_impares(n - 1);
  }

  return n + soma_impares(n - 2);
}

int n;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  cout << soma_impares(n) << endl;
  return 0;
}