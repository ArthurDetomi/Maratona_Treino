#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

struct pais {
    int id, ouro, prata, bronze;
};

int ordem(pais a, pais b) {
    if (a.ouro != b.ouro) {
        return a.ouro > b.ouro;
    }
    if (a.prata != b.prata) {
        return a.prata > b.prata;
    }
    if (a.bronze != b.bronze) {
        return a.bronze > b.bronze;
    }
    return a.id < b.id;
}

int main(void) {
    unsigned n, m;
    cin >> n >> m;

    vector<pais> paises(n);

    for (int i = 0; i < n; i++) {
        paises[i].id = i + 1;
        paises[i].ouro = paises[i].bronze = paises[i].prata = 0;
    }


    int o, p, b;
    for (int  i = 0; i < m; i++) {
        cin >> o >> p >> b;

        paises[o - 1].ouro++;
        paises[p - 1].prata++;
        paises[b - 1].bronze++;
    }

    sort(paises.begin(), paises.end(), ordem);

    for (int  i = 0; i < n; i++) {
        cout << paises[i].id << " ";
    }
    cout << endl;

    return 0;
}