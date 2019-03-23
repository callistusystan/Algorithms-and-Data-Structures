#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  map<int, int> cnt;
  for (int i=0;i<N;i++) {
    int x; cin >> x;
    cnt[x]++;
  }
  priority_queue<pii> pq;
  for (auto p : cnt) pq.push({ p.second, p.first });
  map<int, int> cnt2;
  while (K--) {
    auto p = pq.top(); pq.pop();
    cout << p.second << " ";
    cnt2[p.second]++;
    pq.push({ cnt[p.second]/(cnt2[p.second]+1), p.second });
  }
  cout << endl;
  return 0;
}
