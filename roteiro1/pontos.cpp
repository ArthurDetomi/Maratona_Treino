#include <bits/stdc++.h>
using namespace std;

int main(void) {
    double p1[2], p2[2];
    for (int i = 0; i < 2; i++) {
        cin >> p1[i];
    }
    for (int i = 0; i < 2; i++) {
        cin >> p2[i];
    }

    printf("%.4f\n", sqrt(pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2)));
    return 0;
}