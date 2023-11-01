#include <bits/stdc++.h>

using namespace std;

#define fastio                                                                 \
    ios_base::sync_with_stdio(false);                                          \
    cin.tie(0);                                                                \
    cout.tie(0);

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

#define MAXP 11

typedef pair<int, char> cardPair;

int p, m, n;

void realizar_jogada(vector<cardPair> &mao,
                     pair<int, pair<char, bool>> carta_davez,
                     bool &eh_sentido_horario, deque<cardPair> &fila_saque,
                     stack<pair<int, pair<char, bool>>> &pilha_descarte) {
    if (!carta_davez.second.second) {
        switch (carta_davez.first) {
        case 12:
            eh_sentido_horario = !eh_sentido_horario;

            carta_davez.second.second = true;

            pilha_descarte.pop();
            pilha_descarte.push(carta_davez);

            break;
        case 7: {
            pair<int, char> carta_um = fila_saque.front();
            fila_saque.pop_front();

            pair<int, char> carta_dois = fila_saque.front();
            fila_saque.pop_front();

            mao.pb(carta_um);
            mao.pb(carta_dois);

            carta_davez.second.second = true;

            pilha_descarte.pop();
            pilha_descarte.push(carta_davez);

            return; // passa a vez
        }
        case 1: {
            pair<int, char> carta_um = fila_saque.front();
            fila_saque.pop_front();

            mao.pb(carta_um);

            carta_davez.second.second = true;

            pilha_descarte.pop();
            pilha_descarte.push(carta_davez);

            return;
        }
        case 11: {
            carta_davez.second.second = true;

            pilha_descarte.pop();
            pilha_descarte.push(carta_davez);

            return;
        }
        }
    }

    // Realiza jogada normal, caso não seja impedido acima
    sort(mao.rbegin(), mao.rend());

    auto it = mao.begin();

    while (it != mao.end()) {
        cardPair carta = *it;

        if (carta.first == carta_davez.first ||
            carta.second == carta_davez.second.first) {
            pair<int, pair<char, bool>> carta_jogo =
                mp(carta.first, mp(carta.second, false));
            pilha_descarte.push(carta_jogo);
            fila_saque.push_back(carta);
            mao.erase(it);
            return;
        }
        it++;
    }

    pair<int, char> carta_um = fila_saque.front();
    fila_saque.pop_front();
    mao.pb(carta_um);
}

int main() {
    fastio;

    while (true) {
        vector<vector<cardPair>> mao(MAXP);

        deque<cardPair> fila_saque;

        stack<pair<int, pair<char, bool>>> pilha_descarte;

        cin >> p >> m >> n;

        // condição de parada
        if (p == 0 || m == 0 || n == 0) {
            break;
        }

        int x;  // numero
        char s; // naipe

        for (int i = 0; i < p; i++) {
            for (int j = 0; j < m; j++) {
                cin >> x >> s;

                mao[i].pb(mp(x, s));
            }
        }

        int qtd_restante = (n - 1) - (p * m);

        cin >> x >> s;

        pair<int, pair<char, bool>> carta_inicial = mp(x, mp(s, false));

        pilha_descarte.push(carta_inicial);

        while (qtd_restante--) {
            cin >> x >> s;

            fila_saque.push_front(mp(x, s));
        }

        int vencedor = 0;

        int proximo_jogar = 0;

        bool eh_sentido_horario = true;

        while (true) {
            // o jogo vai girar em torno
            pair<int, pair<char, bool>> carta_atual = pilha_descarte.top();

            realizar_jogada(mao[proximo_jogar], carta_atual, eh_sentido_horario,
                            fila_saque, pilha_descarte);

            if (mao[proximo_jogar].empty()) {
                vencedor = proximo_jogar + 1;
                break;
            }

            if (eh_sentido_horario) {
                proximo_jogar++;
            } else {
                proximo_jogar--;
            }

            if (proximo_jogar == p) {
                proximo_jogar = 0;
            } else if (proximo_jogar == -1) {
                proximo_jogar = p - 1;
            }
        }

        cout << vencedor << endl;
    }

    return 0;
}