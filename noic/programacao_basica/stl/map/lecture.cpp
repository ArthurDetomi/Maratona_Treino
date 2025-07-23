#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

string get_minimal_string(string a, string b) {
  return (a.length() <= b.length()) ? a : b;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int N, M;

  cin >> N >> M;

  unordered_map<string, string> mapa;

  while (M--) {
    string a, b;

    cin >> a >> b;

    string minimal = get_minimal_string(a, b);

    mapa.insert({a, minimal});
  }

  vector<string> lecture;

  for (int i = 0; i < N; i++) {
    string c;

    cin >> c;

    lecture.pb(c);
  }

  int size = lecture.size();

  for (int i = 0; i < size; i++) {
    cout << mapa[lecture[i]];

    if (i != size - 1) {
      cout << " ";
    }
  }

  cout << endl;

  return 0;
}