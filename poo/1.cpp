#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    vector<Node*> sons;
    string name;
};

class Arvore {
  public:
    unordered_map<string, Node*> nodes;

    void addNode(string fatherName, string sonName) {
       if (!nodes.count(fatherName)) {
        nodes[fatherName] = new Node();
        nodes[fatherName]->name = fatherName;
       }
       if (!nodes.count(sonName)) {
        nodes[sonName] = new Node();
        nodes[sonName]->name = sonName;
       }
       nodes[fatherName]->sons.push_back(nodes[sonName]);
    };
    
    int countDescendants(Node *curr) {
      if (!nodes.count(curr->name)) {
        return 0;
      }

      int total = 0;
      
      for (Node *son : curr->sons) {
        total += 1 + countDescendants(son);
      }

      return total;
    };

    Node *getNodeByName(string name) {
      return nodes[name];
    };

};

int main() {
  int n, q;
  cin >> n >> q;
  Arvore *tree = new Arvore();
  while (n--) {
   string fatherName, sonName;

   cin >> fatherName >> sonName;
   tree->addNode(fatherName, sonName);
  }

  while (q--) {
    string search;
    cin >> search;
    
    Node *no = tree->getNodeByName(search);
    cout << tree->countDescendants(no) << endl;
  }

  return 0;
}