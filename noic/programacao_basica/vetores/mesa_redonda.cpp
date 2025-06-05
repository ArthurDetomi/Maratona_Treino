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

  cin >> a;
  cin >> b;

  int a_senta = a % 3;

  int b_senta = b % 3;

  if (a_senta == b_senta) {
    b_senta = (b_senta + 1) % 3;
  }

  for (int i = 0; i < 3; i++) {
    if (i != b_senta && i != a_senta) {
      cout << i << endl;
    }
  }

  return 0;
}