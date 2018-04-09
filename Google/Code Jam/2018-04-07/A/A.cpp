#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll calcDamage(string S) {
  ll dmg = 1, total = 0;
  for (char c : S) {
    if (c == 'C') dmg *= 2;
    else total += dmg;
  }
  return total;
}

void solve() {
  ll D; string S;
  cin >> D >> S;
  int N = S.size();

  int minDamage = count(S.begin(), S.end(), 'S');
  if (minDamage > D) cout << "IMPOSSIBLE\n";
  else {
    // do bfs to find shortest
    queue<pair<ll, string>> q;
    map<string, int> dist;
    q.push({ 0, S });
    dist[S] = 0;
    while (!q.empty()) {
      pair<int, string> front = q.front(); q.pop();
      int d = front.first;
      string state = front.second;
      if (calcDamage(state) <= D) {
        cout << d << endl;
        break;
      }
      for (int i=0;i<N-1;i++) {
        if (state.substr(i, 2) == "CS") {
          string T = state; swap(T[i], T[i+1]);
          if (!dist.count(T)) {
            dist[T] = d + 1;
            q.push({ d+1, T });
          }
        }
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int i=1;i<=T;i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}
