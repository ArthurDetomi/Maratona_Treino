#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

int botas_direita[61];
int botas_esquerda[61];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int m;
    char l;

    cin >> m >> l;

    switch (l) {
    case 'D':
      botas_direita[m]++;
      break;
    case 'E':
      botas_esquerda[m]++;
      break;
    }
  }

  int sum = 0;
  for (int i = 0; i < 61; i++) {
    sum += min(botas_direita[i], botas_esquerda[i]);
  }

  cout << sum << endl;

  return 0;
}