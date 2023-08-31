#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define C 100.00

double f1, f2;

int main(){
    fastio;

    cin >> f1 >> f2;


    double a1 = C;
    
    if (f1 >= 0) {
        a1 += (a1 * (f1 / 100.00));
    } else {
        f1 = -f1;
        a1 -= (a1 * (f1 / 100.00));
    }

    double a2 = a1;
    if (f2 > 0) {
        a2 += (a2 * (f2 / 100.00));
    } else {
        f2 = -f2;
        a2 -= a2 - (a2 * (f2 / 100.00));
    }

    
    double calculo = a2 - C;

    printf("%.6lf\n", calculo);
    return 0;
}