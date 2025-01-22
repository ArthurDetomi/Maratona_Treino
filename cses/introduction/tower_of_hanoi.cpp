#include <bits/stdc++.h>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

vector<pii> moves;

void tower_of_hanoi(int number_disks, int source, int aux, int dest) {

  // Base case
  if (number_disks == 1) {
    moves.push_back({source, dest});
    return;
  }

  tower_of_hanoi(number_disks - 1, source, dest, aux);

  moves.push_back({source, dest});

  tower_of_hanoi(number_disks - 1, aux, source, dest);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  tower_of_hanoi(n, 1, 2, 3);

  int size_moves = moves.size();

  printf("%d\n", size_moves);

  for (int i = 0; i < size_moves; i++) {
    pii current_move = moves[i];

    printf("%d %d\n", current_move.first, current_move.second);
  }

  return 0;
}