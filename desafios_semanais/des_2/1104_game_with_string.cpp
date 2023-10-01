#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

string palavra;

int get_pos_que_repete() {
    for (int i = 0; i < (int) palavra.size() - 1; i++) {
        if (palavra[i] == palavra[i + 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    fastio;

    cin >> palavra;

    int cont = 1;

    bool player1_ganhou;

    while (true) {
        int pos = get_pos_que_repete();

        player1_ganhou = cont % 2 == 0;

        if (pos == -1) {
            break;
        }

        palavra.erase(pos, 2);
        
        cont++;
    }

    cout << (player1_ganhou ? "Yes\n" : "No\n"); 


    return 0;
}