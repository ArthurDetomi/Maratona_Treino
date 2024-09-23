#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

#define endl '\n'

int main() {
  int n, count = 1;

  while (true) {
    cin >> n;

    if (n == 0) {
      break;
    }

    cout << "Teste " << count << endl;
    cout << (int)(pow(2, n) - 1) << endl << endl;

    count++;
  }

  return 0;
}