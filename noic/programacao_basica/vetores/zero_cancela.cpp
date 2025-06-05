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

  int values[n + 1];

  int idx = 0;

  for (int i = 0; i < n; i++) {
    int x;

    cin >> x;

    if (x == 0) {
      idx--;
    } else {
      values[idx] = x;
      idx++;
    }
  }

  int sum = 0;
  for (int i = 0; i < idx; i++) {
    sum += values[i];
  }

  cout << sum << endl;

  return 0;
}