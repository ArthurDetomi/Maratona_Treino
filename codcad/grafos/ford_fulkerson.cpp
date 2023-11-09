#include <bits/stdc++.h>

#define MAX_VERTEXES 51
#define mp make_pair

#define pb push_back

using namespace std;

vector<vector<int>> graph(MAX_VERTEXES, vector<int>(MAX_VERTEXES, 0));

vector<vector<int>> elementar_flow(MAX_VERTEXES, vector<int>(MAX_VERTEXES, 0));

set<int> all_vertexes;

int TAM;

// Finaliza programa exibindo mensagem
void finish_program() {
    cout << "Grafo inválido. Fim do Programa" << endl;
    exit(1);
}

// Verifica se o grafo é inválido
bool is_invalid_graph(int size) {
    for (int i = 0; i < size; i++) {
        if (all_vertexes.find(i) == all_vertexes.end()) {
            return true;
        }
    }
    return false;
}

bool bfs(vector<vector<int>> &graph_r, int source, int destination,
         vector<int> &parent) {
    const int GRAPH_SIZE = destination + 1;

    vector<bool> visited(GRAPH_SIZE, false);
    queue<int> q;
    q.push(source);
    visited[source] = true;
    parent[source] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v = 0; v < GRAPH_SIZE; v++) {
            if (!visited[v] && graph_r[u][v] > 0) {
                if (v == destination) {
                    parent[v] = u;
                    return true;
                }

                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }

    return false;
}

int fordFulkerson(int source, int destination) {
    int u, v;

    const int GRAPH_SIZE = destination + 1;

    vector<vector<int>> graph_r(graph);

    vector<int> parent(GRAPH_SIZE);

    int max_flow = 0;

    while (bfs(graph_r, source, destination, parent)) {
        int path_flow = INT_MAX;

        for (v = destination; v != source; v = parent[v]) {
            u = parent[v];
            path_flow = min(path_flow, graph_r[u][v]);
        }

        for (v = destination; v != source; v = parent[v]) {
            u = parent[v];
            graph_r[u][v] -= path_flow;
            graph_r[v][u] += path_flow;

            elementar_flow[u][v] = path_flow;
        }


        max_flow += path_flow;
    }

    return max_flow;
}

void print_elementar_flow(const int GRAPH_SIZE) {
    printf("Fluxo Elementar:\n");
    for (int i = 0; i < GRAPH_SIZE; i++) {
        for (int j = 0; j < GRAPH_SIZE; j++) {
            if (elementar_flow[i][j] > 0) {
                printf("(%d, %d) = %d\n", i, j, elementar_flow[i][j]);
            }
            elementar_flow[i][j] = 0;
        }
    }
    printf("\n\n");
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int source, destination, flow;

    while (cin >> source >> destination >> flow) {
        graph[source][destination] = flow;

        all_vertexes.insert(source);
        all_vertexes.insert(destination);

        if (all_vertexes.size() >= MAX_VERTEXES - 1) {
            finish_program();
        }
    }

    const int GRAPH_SIZE = all_vertexes.size();

    if (is_invalid_graph(GRAPH_SIZE)) {
        finish_program();
    }

    for (auto current_vr : all_vertexes) {
        if (current_vr != 0) {
            int max_flow = fordFulkerson(0, current_vr);
            printf("Fluxo Máximo: (0, %d) = %d\n", current_vr, max_flow);

            print_elementar_flow(GRAPH_SIZE);
        }
    }

    return 0;
}
