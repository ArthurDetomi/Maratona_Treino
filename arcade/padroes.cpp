#include <bits/stdc++.h>
#include <cmath>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int padroes(int n) {
  if (n == 1) {
    return 20;
  }

  return 8 + padroes(n - 1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  cout << padroes(n) << endl;

  return 0;
}