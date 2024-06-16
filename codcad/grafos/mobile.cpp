#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;
vector<int> size;

int solve(int v) {
    int count_v, count_a, tmp;
    count_v = 0, count_a = 0;

    cout << "vertice_atual = " << v << endl;

    for (int a : adj[v]) {
        cout << "vizinho_atual = " <<  a << endl;
        tmp = solve(a);

        cout << "tmp = " << tmp << "count_a = " << count_a << endl;

        if (tmp == -1)
            return -1;
        if (!count_a)
            count_a = tmp;
        else if (count_a != tmp)
            return -1;
        count_v += count_a;

        cout << "dentro do for = count_v = " << count_v  << "count_a = " << count_a << endl; 
    }
    cout << "fora do for = count_v = " << count_v + 1 << endl; 
    return count_v + 1;
}

int main() {
    int N;
    cin >> N;
    adj = vector<vector<int>>(N + 1, vector<int>());
    for (int i = 0; i < N; i++) {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
    }
    int ans = solve(0) != -1;
    cout << (ans ? "bem" : "mal") << endl;
    return 0;
}