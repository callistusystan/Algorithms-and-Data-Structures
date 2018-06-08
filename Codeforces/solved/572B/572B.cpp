#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, S; cin >> N >> S;
  map<int, int> sell, buy;
  for (int i=0;i<N;i++) {
    char c; int p, q; cin >> c >> p >> q;
    if (c == 'S') sell[p] += q;
    else buy[p] += q;
  }
  vi sell2, buy2;
  for (auto p : sell) sell2.push_back(p.first);
  for (auto p : buy) buy2.push_back(p.first);
  N = min(S, (int)sell2.size());
  for (int i=N-1;i>=0;i--) 
    cout << "S " << sell2[i] << " " << sell[sell2[i]] << endl;
  N = buy2.size();
  for (int i=0;i<min(S, (int)buy2.size());i++) 
    cout << "B " << buy2[N-1-i] << " " << buy[buy2[N-1-i]] << endl;
  return 0;
}
