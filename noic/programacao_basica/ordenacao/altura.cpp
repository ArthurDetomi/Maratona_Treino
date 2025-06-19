#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int main() {
  int nc;

  scanf("%d", &nc);

  while (nc--) {
    int n;

    scanf("%d", &n);

    vector<int> array(n);

    for (int i = 0; i < n; i++)
      scanf("%d", &array[i]);

    sort(array.begin(), array.end());

    for (int i = 0; i < n; i++) {
      printf("%d", array[i]);
      if (i != n - 1) {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}