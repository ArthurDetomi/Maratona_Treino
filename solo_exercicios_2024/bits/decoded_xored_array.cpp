#include <bits/stdc++.h>

using namespace std;

vector<int> decode(vector<int> encoded, int first) {
  const int TAM_ENCODED = encoded.size();
  vector<int> arr(TAM_ENCODED + 1);

  // Inicializo arr
  arr[0] = first;

  for (int i = 0; i < TAM_ENCODED; i++) {
    arr[i + 1] = arr[i] ^ encoded[i];
  }

  return arr;
}

int main() {
  vector<int> encoded = {1, 2, 3};
  int first = 1;

  vector<int> response = decode(encoded, first);

  cout << "Arr: ";
  for (int v : response) {
    cout << v << " ";
  }
  cout << "\n";

  return 0;
}