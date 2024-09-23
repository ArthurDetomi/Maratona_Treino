#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(0);                                                                  \
  cout.tie(0);

using namespace std;

#define endl '\n'

#define MAXN_M 101

int M, N;

vector<int> columnsSum(MAXN_M, 0);

int main() {

  cin >> N >> M;

  int qtd, linesSumMax = 0, sumMax = 0;

  for (int i = 0; i < N; i++) {
    int linesSum = 0;

    for (int j = 0; j < M; j++) {
      cin >> qtd;

      linesSum += qtd;
      columnsSum[j] += qtd;
    }

    linesSumMax = max(linesSumMax, linesSum);
  }

  sumMax = linesSumMax;

  for (int i = 0; i < M; i++) {
    sumMax = max(sumMax, columnsSum[i]);
  }

  cout << sumMax << endl;

  return 0;
}