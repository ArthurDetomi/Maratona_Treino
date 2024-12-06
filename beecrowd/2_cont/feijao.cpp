#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main() {
  fastio;

  int arr[4];

  scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

  for (int i = 0; i < 4; i++) {
    if (arr[i] == 1) {
      printf("%d\n", i + 1);
      break;
    }
  }

  return 0;
}
