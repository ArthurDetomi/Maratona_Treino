#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAX 10

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int idx_1 = 0, idx_2 = 0;

  int pares[MAX], impares[MAX], x;

  for (int i = 0; i < MAX; i++) {
    cin >> x;

    if (x % 2 == 0) {
      pares[idx_1] = x;
      idx_1++;
    } else {
      impares[idx_2] = x;
      idx_2++;
    }
  }

  for (int i = 0; i < idx_1; i++) {
    cout << pares[i];

    if (i != idx_1 - 1) {
      cout << " ";
    }
  }
  cout << endl;

  for (int i = 0; i < idx_2; i++) {
    cout << impares[i];

    if (i != idx_2 - 1) {
      cout << " ";
    }
  }
  cout << endl;

  return 0;
}