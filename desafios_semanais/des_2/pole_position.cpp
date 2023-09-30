#include <bits/stdc++.h>

using namespace std;

int n;

bool eh_valido(int valor)
{
    if (valor < 0 || valor >= n)
    {
        return false;
    }
    return true;
}

bool tem_posicao_vazia_vetor(const vector<int> &vetor)
{
    for (int i = 0; i < n; i++)
    {

        if (vetor[i] == -1)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    while (true)
    {

        cin >> n;

        if (n == 0)
        {
            break;
        }

        vector<int> grid(n, -1);

        int c, p;

        bool tem_solucao = true;

        for (int i = 0; i < n; i++)
        {
            cin >> c >> p;

            if (tem_solucao)
            {

                if (!eh_valido(i + p))
                {
                    tem_solucao = false;
                    continue;
                }
                grid[i + p] = c;
            }
        }
        
        if (tem_solucao && !tem_posicao_vazia_vetor(grid))
        {
            for (int i = 0; i < n; i++) {
                if (i != n - 1) {
                    cout << grid[i] << " ";
                }
                else
                {
                    cout << grid[i];
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}