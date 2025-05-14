#include <bits/stdc++.h>

using namespace std;

int fat(int n) {
  if (n <= 1) {
    return 1;
  }

  return n * fat(n - 1);
}

int main() {
  int n;

  scanf("%d", &n);

  printf("%d\n", fat(n));

  return 0;
}