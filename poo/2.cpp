#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    vector<vector<int>> adj;

    Graph(int n) {
        adj.resize(n + 1); 
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int findMinPath(int start, int dest) {
        vector<int> dist(adj.size(), -1); 
        queue<int> q;

        dist[start] = 0;
        q.push(start);

        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : adj[u]) {
                if (dist[v] == -1) {
                    dist[v] = dist[u] + 1;
                    q.push(v);
                }
            }
        }

        return dist[dest]; 
    }
};

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    Graph g(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << g.findMinPath(a, b) << endl;
    }

    return 0;
}