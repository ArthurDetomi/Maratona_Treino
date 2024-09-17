#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

void overlayNumber(char input[], int number) {
  int j = 0;

  while (number > 0) {
    int last_bit = (number & 1);

    if (last_bit) {
      cout << input[j];
    }

    j++;
    number = number >> 1;
  }
  cout << endl;
}

void generateAllSubsequence(char input[]) {
  const int N = strlen(input);

  for (int i = 0; i < (1 << N); i++) {
    overlayNumber(input, i);
  }
}

int main() {
  char input[100];

  cin >> input;

  generateAllSubsequence(input);

  return 0;
}