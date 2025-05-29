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

  int a, b;

  cin >> a >> b;

  int maior = max(a, b);
  int menor = min(a, b);

  int sol_1 = (a + b) / 2;

  int sol_2 = (2 * menor) - maior;

  int sol_final = min(sol_1, sol_2);

  cout << sol_final << endl;

  return 0;
}