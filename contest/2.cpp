#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int X, sum = 0, value = 0;
  cin >> X;

  for (int i = 0, aux1 = 1; i < 9; i++, aux1++) {
    for (int j = 0, aux2 = 1; j < 9; j++, aux2++) {
      value = aux2 * aux1;

      if (value != X) {
        sum += value;
      }
    }
  }

  cout << sum << endl;

  return 0;
}