#include <bits/stdc++.h>

using namespace std;

// Somando elementos dos vetores com recursão
int helper(const vector<int> &nums, int index) {
    if (index == 0) {
        return nums[0];
    }
    return nums[index] + helper(nums, index - 1);
}

int soma_vetor(const vector<int> &nums) {
    return helper(nums, nums.size() - 1);
}

int vet_sum(int V[], int size) {
    if (size == 0) {
        return 0;
    }
    return V[0] + vet_sum(V + 1, size - 1);
}

int vet_sum2(int V[], int size, int acu) {
    if (size == 0) {
        return acu;
    }
    return vet_sum2(V + 1, size - 1, V[0] + acu);
}

// Retornando o menor elemento  de um vetor com recursão
/*
int V2[] = {10, 2, 3, 4};
10 ou  [2, 3, 4]
10 ou 2 ou [3, 4]
10 ou 2 ou 3 ou [4] entre 4 e nada é o 4 logo
10 ou 2 ou 3 ou 4
10 ou 2 ou 3
10 ou 2
2
*/
int min_vet(int V[0], int size) {
    if (size == 1) {
        return V[0];
    }

    int eu = V[0];
    int menor_do_resto = min_vet(V + 1, size - 1);

    return min(eu, menor_do_resto);
}

int min_vet2(int V[], int size, int acu = INT_MAX) {
    if (size == 0) {
        return acu;
    }
    return min_vet2(V + 1, size - 1, min(V[0], acu));
}

// Procurando o indice de algum valor
int index_of(int V[], int size, int value) {
    if (size == 0) {
        return -1;
    }
    if (V[0] == value) {
        return 0;
    }
    int dist = index_of(V + 1, size - 1, value);

    if (dist == -1) {
        return -1;
    }
    return dist + 1;
}

int index_of2(int V[], int size, int value, int index) {
    if (size == 0) {
        return -1;
    }
    if (V[0] == value) {
        return index;
    }
    return index_of2(V + 1, size - 1, value, index + 1);
}

// Lista de impares
list<int> impares(int V[], int size) {
    if (size == 0) {
        return list<int>();
    }
    if (V[0] % 2 == 0) {
        return impares(V + 1, size - 1);
    }
    auto lista = impares(V + 1, size - 1);
    lista.push_front(V[0]);
    return lista;
}

list<int> impares2(int V[], int size, list<int> &acc) {
    if (size == 0) {
        return acc;
    }
    if (V[0] % 2 == 0) {
        return impares2(V + 1, size - 1, acc);
    }
    acc.push_back(V[0]);
    return impares2(V + 1, size - 1, acc);
}

int main(void) {
    const vector<int> V = {10, 2, 3, 4, 5};
    cout << soma_vetor(V) << endl;

    int V2[] = {10, 2, 3, 4, 7, 9, 11, 23, 49};

    int size = sizeof(V2) / sizeof(int);
    cout << vet_sum(V2, size) << endl;

    cout << vet_sum2(V2, size, 0) << endl;

    cout << min_vet(V2, size) << endl;

    cout << min_vet2(V2, size) << endl;

    cout << index_of(V2, size, 4) << endl;
    cout << index_of2(V2, size, 4, 0) << endl;

    for (auto v : impares(V2, size))
        cout << v << " ";
    cout << endl;

    list<int> lista;
    impares2(V2, size, lista);
    for (auto v : lista)
        cout << v << " ";
    cout << endl;

    return 0;
}