#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

/*
Se N ≤ 100, então f91 (N) = f91 (f91 (N + 11));
Se N ≥ 101, então f91 (N) = N - 10
*/

int f91(int n) {
  if (n > 100) {
    return n - 10;
  }
  return f91(f91(n + 11));
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  while (true) {
    int n;

    scanf("%d", &n);

    if (n == 0) {
      break;
    }

    printf("f91(%d) = %d\n", n, f91(n));
  }

  return 0;
}