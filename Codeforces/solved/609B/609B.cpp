#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi freq(M+5);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    freq[ai]++;
  }
  ll ans = 0;
  for (int i=1;i<M;i++) {
    for (int j=i+1;j<=M;j++) {
      ans += freq[i]*freq[j];
    }
  }
  cout << ans << endl;
  return 0;
}
