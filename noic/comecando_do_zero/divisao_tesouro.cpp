#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int A, N;

  cin >> A;
  cin >> N;

  int result = 2 * (A / (N + 2));

  cout << result << endl;

  return 0;
}