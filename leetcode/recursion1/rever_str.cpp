#include <bits/stdc++.h>

using namespace std;

class Solution { 
    private:
    void helper(int index ,vector<char>& s, int &cont) {
        if (index >= s.size()) {
            return;
        }
        
        helper(index + 1, s, cont);
        
        int lim = (s.size() - 1) / 2;
        
        if (cont <= lim) {
            swap(s[cont], s[index]);
            cont++;
        }
    }
    
    public:
    void reverseString(vector<char>& s) {
        int cont = 0;
        helper(0, s, cont);
    }
};