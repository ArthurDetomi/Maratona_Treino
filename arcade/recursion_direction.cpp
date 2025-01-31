#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

/**
  5
  1 2 3 4 5
  5 4 3 2 1
*/

void recursion_direction(int n) {
  if (n == 0) {
    return;
  }

  cout << n << endl;
  recursion_direction(n - 1);
  cout << n << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  recursion_direction(n);

  return 0;
}