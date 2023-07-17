#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

struct player {
    int v;
    char c;
};

int main(void) {
    player jog[3];

    char d = 'A';
    for (int i = 0; i < 3; i++) {
        jog[i].c = d;
        d++;
    }

    while (cin >> jog[0].v >> jog[1].v >> jog[2].v) {
        int soma = jog[0].v + jog[1].v + jog[2].v;

        if (soma == 1) {
            for (int i = 0; i < 3; i++) {
                if (jog[i].v == 1) {
                    cout << jog[i].c << endl;
                    break;
                }
            }
        } else if (soma == 2) {
            for (int i = 0; i < 3; i++) {
                if (jog[i].v == 0) {
                    cout << jog[i].c << endl;
                    break;
                }
            }
        } else {
            cout << "*" << endl;
        }
    }

    return 0;
}