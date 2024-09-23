#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

#define endl '\n'

int main() {
  short n, count = 1;

  while (true) {
    cin >> n;

    if (n == 0) {
      break;
    }

    short ticket, winner_ticket;

    for (int i = 1; i <= n; i++) {
      cin >> ticket;

      if (ticket == i) {
        winner_ticket = ticket;
      }
    }

    cout << "Teste " << count << endl;
    cout << winner_ticket << endl << endl;

    count++;
  }

  return 0;
}