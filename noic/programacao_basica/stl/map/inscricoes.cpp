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

  while (true) {
    int n;

    cin >> n;

    if (n == 0)
      break;

    unordered_map<string, int> M;

    vector<string> ordem;

    while (n--) {
      string nome, inst;

      cin >> nome >> inst;

      if (M.count(inst) > 0) {
        M[inst]++;
      } else {
        M.insert({inst, 1});
        ordem.pb(inst);
      }
    }

    for (int i = 0; i < (int)ordem.size(); i++) {
      cout << ordem[i] << " " << M[ordem[i]] << endl;
    }
  }

  return 0;
}