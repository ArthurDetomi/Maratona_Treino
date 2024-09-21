#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

#define endl '\n'

#define TAM_MAX 36

unordered_map<char, int> b36ToDecimal(TAM_MAX);
unordered_map<int, char> decimalToB36(TAM_MAX);

void fillMaps() {
  char c;

  c = '0';
  for (int i = 0; i < 10; i++) {
    b36ToDecimal[c] = i;

    decimalToB36[i] = c;

    c++;
  }

  c = 'A';
  for (int i = 10; i < TAM_MAX; i++) {
    b36ToDecimal[c] = i;

    decimalToB36[i] = c;

    c++;
  }
}

int convertB36ToDecimal(string str) {
  int strSize = str.size();

  int expo = strSize - 1;

  int sum = 0;

  for (int i = 0; i < strSize; i++) {
    sum += b36ToDecimal[str[i]] * pow(36, expo);

    expo--;
  }

  return sum;
}

string convertDecimalToB36(int number) {
  string b36Number = "";

  while (number > 0) {
    int remainder = number % 36;

    b36Number += decimalToB36[remainder];

    number = number / 36;
  }

  reverse(b36Number.begin(), b36Number.end());

  return b36Number;
}

int main() {
  fastio;

  fillMaps();

  string a, b;

  while (true) {
    cin >> a >> b;

    int convertedA = convertB36ToDecimal(a);
    int convertedB = convertB36ToDecimal(b);

    int sum = convertedB + convertedA;

    cout << convertDecimalToB36(sum) << endl;

    if (a == "0" && b == "0") {
      break;
    }
  }

  return 0;
}