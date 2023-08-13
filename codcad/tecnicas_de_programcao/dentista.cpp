#include <bits/stdc++.h>

using namespace std;

#define _                                                                      \
    ios_base < : sync_with_stdio(false);                                       \
    cin.tie(0);                                                                \
    cout.tie(0);

#define MAXN 10100

#define endl '\n'

struct compromisso {
    int inicio, fim;
}; 

bool comp(compromisso a, compromisso b) {
    return a.fim < b.fim;
}

int main(void) {
    int n, total = 0, livre = 0;
    cin >> n;

    vector<compromisso> consultas(n);
    
    for (int i = 0; i < n; i++) {
        cin >> consultas[i].inicio >> consultas[i].fim;
    }

    // Ordenando pelos que acabaram mais cedo
    sort(consultas.begin(), consultas.end(), comp);

    for (int i = 0; i < n; i++) {
        if (consultas[i].inicio >= livre) {
            livre = consultas[i].fim;
            total++;
        }
    }

    cout << total << endl;

    return 0;
}