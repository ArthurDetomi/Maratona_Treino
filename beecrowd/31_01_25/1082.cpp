#include <bits/stdc++.h>
#include <unordered_map>

#define endl '\n'

#define pii pair<int, int>

using namespace std;

int N, V, E;

unordered_set<char> visited;

unordered_map<char, vector<int>> graph;

vector<int> all_vertexs;

vector<set<char>> all_components;

void dfs(char current_vertex, set<char> &components) {
  visited.insert(current_vertex);
  components.insert(current_vertex);

  for (char neighbor : graph[current_vertex]) {
    if (visited.find(neighbor) == visited.end()) {
      dfs(neighbor, components);
    }
  }
}

void fill_components() {
  for (char vertex : all_vertexs) {
    if (visited.find(vertex) != visited.end()) {
      continue;
    }
    set<char> components;
    dfs(vertex, components);

    all_components.push_back(components);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;

  int count = 1;

  while (N--) {
    cin >> V >> E;

    char c = 'a';

    for (int i = 0; i < V; i++) {
      graph[c] = vector<int>();
      all_vertexs.push_back(c);
      c++;
    }

    for (int i = 0; i < E; i++) {
      char a, b;

      cin >> a >> b;

      graph[a].push_back(b);
      graph[b].push_back(a);
    }

    // solve
    fill_components();

    // printa a saida
    cout << "Case #" << count << ":\n";
    for (int i = 0; i < (int)all_components.size(); i++) {
      for (char v : all_components[i]) {
        cout << v << ",";
      }
      cout << endl;
    }

    cout << all_components.size() << " connected components\n";
    cout << endl;

    // reseta variaveis globais
    graph.clear();
    all_vertexs.clear();
    visited.clear();
    all_components.clear();

    count++;
  }

  return 0;
}