#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(void) {
    int t;
    cin >> t;
    
    // patapon npatapatapatapo            
    // ava av
    // haskell lleksah      
    
    while (t--) {
        string seq, bracel;
        cin >> seq >> bracel;

        bracel += bracel;

        string reverse_bracel = bracel; 
        reverse(reverse_bracel.begin(), reverse_bracel.end());

        if (reverse_bracel.find(seq) == string::npos && bracel.find(seq) == string::npos) {
            cout << "N" << endl;
        } else {
            cout << "S" << endl;
        }
    }
    
    return 0;
}