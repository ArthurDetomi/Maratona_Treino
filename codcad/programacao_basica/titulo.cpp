#include <bits/stdc++.h>

using namespace std;

string title(string F){
    string nova_frase;

    stringstream ss(F);
    string palavra;
    while (ss >> palavra) {
        palavra[0] = toupper(palavra[0]);

        int tam = (int) palavra.size();

        for (int i = 1; i < tam; i++) {
            palavra[i] = tolower(palavra[i]);
        }

        nova_frase += palavra;
        nova_frase += " ";
    }
    nova_frase[nova_frase.size() - 1] = '\n';

    return nova_frase;
}

int main(){
    string F;

    getline(cin, F);

    cout << title(F) << "\n";
}