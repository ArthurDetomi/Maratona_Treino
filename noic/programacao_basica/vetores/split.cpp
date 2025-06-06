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

  int n;

  cin >> n;

  int values[n], maximo = 0, idx = -1;

  for (int i = 0; i < n; i++) {
    cin >> values[i];

    if (values[i] > maximo) {
      maximo = values[i];
      idx = i;
    }
  }

  int sum_1 = 0, sum_2 = 0;

  for (int i = 0; i < idx; i++) {
    sum_1 += values[i];
  }

  for (int i = idx + 1; i < n; i++) {
    sum_2 += values[i];
  }

  cout << sum_1 << endl;
  cout << sum_2 << endl;

  return 0;
}