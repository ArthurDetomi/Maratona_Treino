#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0)

#define endl '\n'

#define MAXN 25

#define pb push_back

struct pos {
    int v, p;
};

int N; // qtd de pilotos

int main() {
    fastio;

    while (cin >> N) {
        unordered_map<int, int> M;
        vector<pos> largada;
        vector<pos> chegada;

        int v;
        
        // lendo largada
        for (int i = 0; i < N; i++) {
            cin >> v;
            largada.pb({v, i});
            M[v] = i;
        }

        // lendo chegada
        for (int i = 0; i < N; i++) {
            cin >> v;
            int peso = M[v];
            chegada.pb({v, peso});
        }

        int mov = 0;

        int fim = N;
        bool ordenado;
        do {
            ordenado = false;
            for (int i = 0; i < fim - 1; i++) {
                if (chegada[i].p > chegada[i + 1].p) {
                    swap(chegada[i], chegada[i + 1]);
                    mov++;
                    ordenado = true;
                }
            }
            fim--;
        } while (ordenado);

        cout << mov << endl;
    }

    return 0;
}