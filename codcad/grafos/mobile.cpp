#include <iostream>
#include <vector>
using namespace std;

vector< vector<int> > adj;

int solve(int v) {
    int count_v, count_a, tmp;

    count_v = 0, count_a = 0;
    
    for (int vizinho : adj[v]) {
        tmp = solve(vizinho);

        if (tmp == -1)
            return -1;
        
        if (!count_a)
            count_a = tmp;

        else if (count_a != tmp)
            return -1;

        count_v += count_a;
    }
    
    return count_v + 1;
}

int main() {
    int N;
    
    cin >> N;
    
    adj = vector< vector<int> >(N + 1, vector<int>());
    
    for (int i = 0; i < N; i++) {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
    }

    bool ans = solve(0) != -1;
    
    cout << (ans ? "bem" : "mal") << endl;
    
    return 0;
}