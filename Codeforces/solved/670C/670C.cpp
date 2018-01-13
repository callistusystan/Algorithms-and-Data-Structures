#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, int> cnt;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
  }
  int M; cin >> M;
  vi B(M), C(M);
  for (int i=0;i<M;i++) cin >> B[i];
  for (int i=0;i<M;i++) cin >> C[i];
  pair<pii, int> best = { {cnt[B[0]], cnt[C[0]]}, 0 };
  for (int i=1;i<M;i++) {
    pair<pii, int> cur = { {cnt[B[i]], cnt[C[i]]}, i };
    if (cur.first > best.first) best = cur;
  }
  cout << best.second + 1 << endl;
  return 0;
}
