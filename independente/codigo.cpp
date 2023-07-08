#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(void) {
    int n;
    cin >> n;   
    int seq[n];
    int value;
    int cont = 0;
    for (int i = 0; i < n; i++) {
        cin >> value;
        seq[i] = value;
        if (i >= 2) {
            if (seq[i] == 0 && seq[i - 1] == 0 && seq[i - 2] == 1) {
                cont++;
            }
        }
    }
    cout << cont << endl;
    return 0;
}