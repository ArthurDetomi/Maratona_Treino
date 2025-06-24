#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

void buble_sort(int *array, int n, int &swap_count) {
  bool swapped = false;
  do {
    swapped = false;

    for (int i = 0; i < n - 1; i++) {
      if (array[i] > array[i + 1]) {
        swap(array[i], array[i + 1]);
        swap_count++;

        swapped = true;
      }
    }
  } while (swapped);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  scanf("%d", &n);

  while (n--) {
    int l;

    scanf("%d", &l);

    int vagoes[l];

    for (int i = 0; i < l; i++) {
      scanf("%d", &vagoes[i]);
    }

    int swap_count = 0;

    buble_sort(vagoes, l, swap_count);

    printf("Optimal train swapping takes %d swaps.\n", swap_count);
  }

  return 0;
}