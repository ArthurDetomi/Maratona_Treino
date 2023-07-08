#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define MAXN 51

int main(void) {
    int n;
    cin >> n;

    vector<int> campo(MAXN, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> campo[i];    
    }   

    int result;
    for (int i = 1; i <= n; i++) {
        result = campo[i - 1] + campo[i] + campo[i + 1];
        cout << result << endl;
    }


    return 0;
}