#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;

  queue<pii> q;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    q.push({ai,i+1});
  }

  int last = -1;
  while (!q.empty()) {
    pii cur = q.front(); q.pop();
    int ai, i;
    ai = cur.first; i = cur.second;
    last = i;
    ai = max(0, ai-M);
    if (ai != 0) q.push({ai, i});
  }

  cout << last << endl;

  return 0;
}
