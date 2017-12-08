#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  for (int i=0;i<N;i++) {
    int ai, bi; cin >> ai >> bi;
    pq.push({ ai, bi });
  }

  int d = -1;
  while (!pq.empty()) {
    pii cur = pq.top(); pq.pop();
    int ai, bi;
    ai = cur.first; bi = cur.second;
    if (bi >= d) d = bi;
    else d = ai;
  }

  cout << d << endl;

  return 0;
}
