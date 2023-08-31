#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0)

#define endl '\n'

int N;

int main(void) {
    fastio;
    
    while (true) {
        cin >> N;

        if (N == 0) break;

        int C, V;
        
        int result = 0;
        while (N--) {
            cin >> C >> V;
            result += (V / 2);
        }
        result /= 2;
        
        cout << result << endl;
    }

    return 0;
}