#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pair<string, ll>> A(N);
  map<string, ll> M;
  for (int i=0;i<N;i++) {
    string si; ll ai;
    cin >> si >> ai;
    A[i] = {si, ai};
    M[si] += A[i].second;
  }

  // find best score
  ll best = 0;
  for (auto it=M.begin();it!=M.end();it++) {
    pair<string, ll> p = *it;
    best = max(best, p.second);
  }

  // find candidate winners
  set<string> winners;
  for (auto it=M.begin();it!=M.end();it++) {
    pair<string, ll> p = *it;
    if (p.second == best) {
      winners.insert(p.first);
    }
  }

  // print real winner
  if (winners.size() == 1) {
    cout << *winners.begin() << endl;
  } else {
    map<string, ll> M2;
    for (int i=0;i<N;i++) {
      string si; ll ai;
      si = A[i].first; ai = A[i].second;
      M2[si] += ai;
      if (M2[si] >= best && winners.count(si)) {
        cout << si << endl;
        return 0;
      }
    }
  }


  return 0;
}
