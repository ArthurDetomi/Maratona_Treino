#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back
#define mp make_pair


int main() {
    ifstream file("sjdr.gml");
    string line;

    if (file.is_open()) {
        int count = 0;
        
        while (getline(file, line)) {
            
            // ler vertices
            if (line.contains("id")) {
                stringstream ss(line);
                string word;
                while (ss >> word) {
                    if (isdigit(word)) {

                    }
                }
            } else if (line.contains("label")) {
                
            }

            // ler arestas
            if (line.contains("source")) {

            } else if (line.contains("target")) {

            } else if (line.contains("name")) {  

            }


            
            
            /*
            string word;
            while (ss >> word) {
                switch (word) {
                    case "node":
                        
                    case "edge":
                
                }
            }
            */
        }
        file.close();
    } else {
        cout << "Não foi possível abrir o arquivo" << endl;
    }

    return 0;
}