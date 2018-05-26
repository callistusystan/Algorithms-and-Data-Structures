#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi partner(2*N, -1);
  priority_queue<pair<int, pii>> pq;
  for (int i=1;i<2*N;i++) {
    for (int j=0;j<i;j++) {
      int aij; cin >> aij;
      pq.push({ aij, { i, j } });
    }
  }
  while (!pq.empty()) {
    auto p = pq.top(); pq.pop();
    int x = p.second.first, y = p.second.second;
    if (partner[x] == -1 && partner[y] == -1) {
      partner[x] = y;
      partner[y] = x;
    }
  }
  for (int i=0;i<2*N;i++) cout << partner[i]+1 << " \n"[i==2*N-1];
  return 0;
}
