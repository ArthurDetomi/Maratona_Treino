#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int sum_arr(int *arr, int n) {
  if (n == 0) {
    return 0;
  }

  return arr[n - 1] + sum_arr(arr, n - 1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int arr[] = {1, 3, 5, 4};

  int size = sizeof(arr) / sizeof(int);

  cout << sum_arr(arr, size) << endl;

  return 0;
}