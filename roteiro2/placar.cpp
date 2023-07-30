#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main(void) {    
    int n;

    int cont = 1;
    while (cin >> n) {
        vector<pair<string, int>> alunos;

        pair<string, int> tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp.first >> tmp.second;
            alunos.push_back(tmp);
        }

        sort(alunos.begin(), alunos.end(), comp);

        printf("Instancia %d\n%s\n", cont++, alunos.back().first.c_str());
    }
}