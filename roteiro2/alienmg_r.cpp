#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'

int N;

unordered_map<char, int> M;

void init() {
    int it = 0;
    for (char c = 'A'; c <= 'O'; c++)  {
        M[c] = it;
        it++;
    }
}

int main() {
    fastio;
    
    init();
    set<array<int, 15>> S;
    string str;
    
    while (true) {
        cin >> N;

        if (!N)
            break;
        
        S.clear();
        
        for (int i = 0; i < N; i++) {
            cin >> str;
            array<int, 15> letras = {0};
            for (char c : str) {
                (letras[M[c]]++);
            }
            S.insert(letras);
        }

        cout << S.size() << endl;
    }

    return 0;
}
