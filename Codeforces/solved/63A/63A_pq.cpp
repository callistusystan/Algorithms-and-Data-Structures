#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, string> M;
  priority_queue<pii, vector<pii>, greater<pii>> pq;
  for (int i=0;i<N;i++) {
    string ai, bi; cin >> ai >> bi;
    M[i] = ai;
    if (bi == "rat") pq.push({ 0, i });
    else if (bi == "woman" || bi == "child") pq.push({ 1, i });
    else if (bi == "man") pq.push({ 2, i });
    else pq.push({ 3, i });
  }
  while (!pq.empty()) {
    pii p = pq.top(); pq.pop();
    cout << M[p.second] << endl;
  }
  return 0;
}
