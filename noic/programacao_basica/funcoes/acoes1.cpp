#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

void acoes(int n, int k, int &count) {
  if (n <= k) {
    count++;
    return;
  }

  int v1 = n / 2;
  int v2 = n - v1;

  acoes(v1, k, count);
  acoes(v2, k, count);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  while (true) {
    int n, k;

    scanf("%d %d", &n, &k);

    if (n == 0 || k == 0) {
      break;
    }

    int count = 0;

    acoes(n, k, count);

    printf("%d\n", count);
  }

  return 0;
}