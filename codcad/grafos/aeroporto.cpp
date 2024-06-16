#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define MAXV 10001

#define MAXA 101

int v, a;

array<int, MAXA> aeroportos = {0};

int main() {
    int cont = 1;

    while (true) {
        cin >> a >> v;

        aeroportos = {0};

        if (v == 0 && a == 0)
            break;

        int x, y;
        int maior = 0;

        for (int i = 0; i < v; i++) {
            cin >> x >> y;
            aeroportos[x - 1]++;
            aeroportos[y - 1]++;
            maior = max(maior, max(aeroportos[x - 1], aeroportos[y - 1]));
        }

        cout << "Teste " << cont++ << endl;
        // Comentário teste
        for (int i = 0; i < a; i++) {
            if (aeroportos[i] == maior) {
                cout << i + 1;
                if (i != a - 1) cout << " ";
            }
        }   
        cout << endl << endl;
    }
    return 0;
}