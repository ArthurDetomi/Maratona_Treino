#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAX 12

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  char op;

  cin >> op;

  int count = 0;

  double value, sum = 0.0;

  int flag = MAX - 1;

  for (int i = 0; i < MAX; i++) {
    for (int j = 0; j < MAX; j++) {
      cin >> value;

      if (j > flag) {
        sum += value;
        count++;
      }
    }
    flag--;
  }

  switch (op) {
  case 'S':
    printf("%.1f\n", sum);
    break;
  case 'M':
    printf("%.1f\n", (double)sum / count);
    break;
  }
  return 0;
}