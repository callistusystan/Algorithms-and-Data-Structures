#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

void solve() {
  int N,K; cin >> N >> K;
  vector<double> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  vector<double> sum(N);
  for (int i=0;i<N;i++) {
    sum[i] = A[i];
    if (i) sum[i] += sum[i-1];
  }
  double prob = sum[N-1]/N;
  for (int i=0;i<K;i++) {
    int nBelowMean = upper_bound(A.begin(), A.end(), prob) - A.begin();
    prob = nBelowMean*prob/N;
    if (nBelowMean == 0) prob += sum[N-1]/N;
    else prob += (sum[N-1]-sum[nBelowMean-1])/N;
  }
  cout << fixed << setprecision(12) << prob << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int i=1;i<=T;i++) {
    cout << "Case #" << i << ": ";
    solve();
  }
  return 0;
}
