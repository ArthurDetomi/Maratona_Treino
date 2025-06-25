#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int to_int(char c) { return c - '0'; }

int conv_to_decimal(char *bin) {
  int size = strlen(bin);

  if (size == 1) {
    return to_int(bin[0]);
  }

  return to_int(bin[0]) * (int)pow(2, size - 1) + conv_to_decimal(bin + 1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  char binario[100];

  cin >> binario;

  cout << conv_to_decimal(binario) << endl;

  return 0;
}