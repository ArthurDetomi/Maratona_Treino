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

  int n, result = 0;

  cin >> n;

  int div;
  for (int i = 0; i < n; i++) {
    cin >> div;

    result += div - 1;
  }

  cout << result << endl;

  return 0;
}