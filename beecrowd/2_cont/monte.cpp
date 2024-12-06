#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pll pair<ll, ll>

int main() {

  ll d, t;

  int N;

  cin >> N;

  vector<pll> montes = vector<pll>(N);
  vector<pll> montes_2 = vector<pll>(N);

  for (int i = 0; i < N; i++) {
    cin >> d >> t;

    montes[i] = {t, d};
    montes_2[i] = {d, t};
  }

  sort(montes.begin(), montes.end());
  sort(montes_2.rbegin(), montes_2.rend());

 
  bool is_distance_ordened = true;

  for (int i = 1; i < N; i++) {
    if (montes_2[i].first != montes[i].second) {
      is_distance_ordened = false;
      break;
    }
  }

  (is_distance_ordened) ? cout << "S\n" : cout << "N\n";

  return 0;
}