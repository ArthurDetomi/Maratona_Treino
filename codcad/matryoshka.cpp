#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main(void) {
    int n;
    cin >> n;

    vector<int> vet(n), vet_ord(n), vet_aux(n);

    for (int i = 0; i < n; i++) {
        cin >> vet[i];
        vet_ord[i] = vet[i];
    }

    // n log n
    sort(vet_ord.begin(), vet_ord.end());

    int cont_inv = 0;
    int ind = 0;
    for (int i = 0; i < n; i++) {
        if (vet_ord[i] != vet[i]) {
            vet_aux[ind++] = vet_ord[i];
            cont_inv++;
        }
    }

    cout<< cont_inv <<endl;//mostro quantas inversoes foram feitas
    for(int i = 0; i < cont_inv; i++)
        cout << vet_aux[i]<<" ";//e depois mostro os valores
    cout<<endl;
}
