#include <iostream>
#include <vector>

using namespace std;

int R, K;

int back(int currentValue, const vector<int> &nums, int soma, int qtd) {
    if (qtd == K && soma == R) {
        return 0;
    }

}

int main() {
    cin >> R >> K;
    vector<int> notas(R);
    for (int i = 0; i < R; i++)
        notas[i] = i + 1;
    cout << back() << endl;
    return 0;
}
