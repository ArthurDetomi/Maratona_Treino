#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int cont_dig(int n) {
  if (n < 10) {
    return 1;
  }

  return 1 + cont_dig(n / 10);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  cout << cont_dig(n) << endl;

  return 0;
}