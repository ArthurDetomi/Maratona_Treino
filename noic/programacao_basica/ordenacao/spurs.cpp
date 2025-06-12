#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define pb push_back

#define mp make_pair

#define f first

#define s second

class Time {
public:
  int n_time;
  int ranking;
  int vitorias;
  int derrotas;
  int pts_marcados;
  int pts_sofridos;

  Time(int num) {
    n_time = num;
    vitorias = 0;
    derrotas = 0;
    ranking = 0;
    pts_marcados = 0;
    pts_sofridos = 0;
  }

  double get_average() {
    if (pts_sofridos == 0) {
      return pts_marcados;
    }
    return (double)pts_marcados / pts_sofridos;
  }
};

bool compara(Time time1, Time time2) {
  if (time1.ranking > time2.ranking) {
    return true;
  } else if (time2.ranking > time1.ranking) {
    return false;
  } else {
    if (time1.get_average() > time2.get_average()) {
      return true;
    } else if (time2.get_average() > time1.get_average()) {
      return false;
    } else {
      if (time1.pts_marcados > time2.pts_marcados) {
        return true;
      } else if (time2.pts_marcados > time1.pts_marcados) {
        return false;
      } else {
        if (time1.n_time < time2.n_time) {
          return true;
        } else {
          return false;
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, num_time_1, pts_time_1, num_time_2, pts_time_2, instancia = 1;

  while (true) {
    cin >> n;

    if (n == 0) {
      break;
    }

    if (instancia != 1) {
      cout << endl;
    }

    int qtd_jogos = n * (n - 1) / 2;

    unordered_map<int, Time> M;

    while (qtd_jogos--) {

      cin >> num_time_1 >> pts_time_1 >> num_time_2 >> pts_time_2;

      Time &time1 = M.try_emplace(num_time_1, num_time_1).first->second;

      time1.pts_marcados += pts_time_1;
      time1.pts_sofridos += pts_time_2;
      time1.vitorias += (pts_time_1 > pts_time_2);
      time1.derrotas += (pts_time_1 < pts_time_2);

      if (pts_time_1 > pts_time_2) {
        time1.ranking += 2;
      } else {
        time1.ranking += 1;
      }

      Time &time2 = M.try_emplace(num_time_2, num_time_2).first->second;
      time2.pts_marcados += pts_time_2;
      time2.pts_sofridos += pts_time_1;
      time2.vitorias += (pts_time_2 > pts_time_1);
      time2.derrotas += (pts_time_2 < pts_time_1);

      if (pts_time_2 > pts_time_1) {
        time2.ranking += 2;
      } else {
        time2.ranking += 1;
      }
    }

    vector<Time> times;

    for (auto p : M) {
      times.push_back(p.second);
    }

    sort(times.begin(), times.end(), compara);

    cout << "Instancia " << instancia << endl;
    for (int i = 0; i < (int)times.size(); i++) {
      cout << times[i].n_time;
      if (i != n - 1) {
        cout << " ";
      }
    }
    cout << endl;

    instancia++;
  }

  return 0;
}