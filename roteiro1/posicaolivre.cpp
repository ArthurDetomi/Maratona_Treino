#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int h, w, n;
    while (1) {
        cin >> h >> w >> n;
        vector<vector<bool>> mat(h + 1, vector<bool>(w + 1, true));

        if (h == 0 && w == 0 && n == 0) {
            break;
        }

        queue<int> posicoes;

        for (int i = 0; i < n; i++) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            posicoes.push(x1);
            posicoes.push(y1);
            posicoes.push(x2);
            posicoes.push(y2);
        }

        while (n--) {
            int x1 = posicoes.front();
            posicoes.pop();
            int y1 = posicoes.front();
            posicoes.pop();
            int x2 = posicoes.front();
            posicoes.pop();
            int y2 = posicoes.front();
            posicoes.pop();

            if (y1 > y2) {
                swap(y1, y2);
            }
            
            if (x1 > x2) {
                swap(x1, x2);
            }

            for (int i = x1; i <= x2; i++) {
                for (int j = y1; j <= y2; j++) {
                    mat[i][j] = false;
                }
            }
        }
    
        int cont = 0;
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                if (mat[i][j] == true) {
                    cont++;
                }
            }
        }

        if (cont == 0) {
            printf("There is no empty spots.\n");
        } else if (cont == 1) {
            printf("There is one empty spot.\n");
        } else {
            printf("There are %d empty spots.\n", cont);
        }
    }

    return 0;
}