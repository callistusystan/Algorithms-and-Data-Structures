#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi W(N), B(M);
  for (int i=0;i<N;i++) cin >> W[i];
  for (int i=0;i<M;i++) {
    cin >> B[i];
    B[i]--;
  }
  vi st(N, -1), used(N);
  int j = N-1;
  for (int i=0;i<M;i++) {
    if (!used[B[i]]) {
      used[B[i]] = 1;
      st[j--] = B[i];
    }
  }
  ll ans = 0;
  for (int i=0;i<M;i++) {
    int j = find(st.begin(), st.end(), B[i]) - st.begin();
    while (j+1 < N) {
      swap(st[j], st[j+1]);
      ans += W[st[j]];
      j++;
    }
  }
  cout << ans << endl;
  return 0;
}
