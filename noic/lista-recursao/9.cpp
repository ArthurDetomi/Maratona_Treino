#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int maximo(int *arr, int n) {
  if (n == 1) {
    return arr[0];
  }

  return max(arr[n - 1], maximo(arr, n - 1));
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int arr[5] = {
      1, 10, 2, 6, 7,
  };

  cout << maximo(arr, 5) << endl;

  return 0;
}