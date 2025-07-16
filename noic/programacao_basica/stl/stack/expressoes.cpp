#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

char is_cadeia_bem_definida(string A) {
  unordered_map<char, char> M;

  M['{'] = '}';
  M['['] = ']';
  M['('] = ')';

  stack<char> S;

  for (char c : A) {
    if (M.count(c) > 0) {
      S.push(M[c]);
    } else {
      if (S.empty()) {
        return 'N';
      }

      char current_top = S.top();
      S.pop();

      if (current_top != c) {
        return 'N';
      }
    }
  }

  return (S.empty()) ? 'S' : 'N';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int T;

  cin >> T;

  for (int i = 0; i < T; i++) {
    string A;

    cin >> A;

    char resp = is_cadeia_bem_definida(A);

    printf("%c\n", resp);
  }

  return 0;
}