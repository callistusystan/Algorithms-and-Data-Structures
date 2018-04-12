#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K,Q; cin >> N >> K >> Q;
  vi cnt(2e5+5);
  for (int i=0;i<N;i++) {
    int li,ri; cin >> li >> ri;
    cnt[li]++;
    cnt[ri+1]--;
  }
  for (int i=1;i<2e5+5;i++) {
    cnt[i] += cnt[i-1];
  }
  for (int i=1;i<2e5+5;i++) {
    cnt[i] = cnt[i] >= K;
    cnt[i] += cnt[i-1];
  }
  while (Q--) {
    int li,ri; cin >> li >> ri;
    cout << cnt[ri]-cnt[li-1] << endl;
  }
  return 0;
}
