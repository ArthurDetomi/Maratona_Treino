#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int qtd_vezes(int *arr, int n, int v) {
  if (n == 0) {
    return 0;
  }

  return qtd_vezes(arr, n - 1, v) + (arr[n - 1] == v);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int arr[10] = {1, 1, 1, 2, 3, 4, 5, 2, 1, 9};

  int n;

  cin >> n;

  cout << qtd_vezes(arr, 10, n) << endl;

  return 0;
}