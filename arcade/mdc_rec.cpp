#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int mdc(int a, int b) {
  if (a == 0) {
    return b;
  }
  if (b == 0) {
    return a;
  }

  int r = a % b;
  return mdc(b, r);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);

  printf("%d\n", mdc(a, b));

  return 0;
}