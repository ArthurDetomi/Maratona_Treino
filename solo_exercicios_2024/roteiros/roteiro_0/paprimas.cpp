#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

#define endl '\n'

unordered_map<char, int> charParaIntMap(52);

void fillMap() {
  int count = 1;

  for (char c = 'a'; c <= 'z'; c++) {
    charParaIntMap[c] = count;

    count++;
  }

  for (char c = 'A'; c <= 'Z'; c++) {
    charParaIntMap[c] = count;

    count++;
  }
}

bool isPrime(int n) {
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int calculateStringValue(string str) {
  int n = str.size();

  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += charParaIntMap[str[i]];
  }

  return sum;
}

int main() {
  fastio;

  fillMap();

  string str;

  while (cin >> str) {
    int stringValue = calculateStringValue(str);

    if (isPrime(stringValue)) {
      cout << "It is a prime word." << endl;
    } else {
      cout << "It is not a prime word." << endl;
    }
  }

  return 0;
}