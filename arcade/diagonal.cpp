#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

void diagonal(const char *s, int k) {
  if (*s == '\0') {
    return;
  }
  // imprima k caracteres
  for (int i = 0; i < k; i++) {
    cout << " ";
  }
  // imprima o primeiro caractere de s e pule a linha
  cout << s[0] << endl;
  // faça a chamada recursiva
  diagonal(s + 1, k + 1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string word;

  cin >> word;

  diagonal(word.c_str(), 1);

  return 0;
}