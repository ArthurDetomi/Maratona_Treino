#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int fat(int n) {
  if (n <= 1) {
    return 1;
  }

  return n * fat(n - 1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  cout << fat(n) << endl;

  return 0;
}