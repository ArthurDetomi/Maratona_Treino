#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAX 110

int mar[MAX][MAX];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, count = 0;

  cin >> n;

  while (n--) {
    int xi, xf, yi, yf;

    cin >> xi >> xf >> yi >> yf;

    for (int i = xi; i < xf; i++) {
      for (int j = yi; j < yf; j++) {
        mar[i][j] = 1;
      }
    }
  }
  for (int i = 1; i < MAX; i++) {
    for (int j = 1; j < MAX; j++) {
      if (mar[i][j]) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}