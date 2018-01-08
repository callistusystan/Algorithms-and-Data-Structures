#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int mod(int a, int b) {
  return ((a%b)+b)%b;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  vector<ll> A(N);
  vi isCap(N);
  ll sum = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    sum += A[i];
  }
  while (K--) {
    int ai; cin >> ai;
    isCap[ai-1] = 1;
  }
  ll ans = 0;
  for (int i=0;i<N;i++) {
    if (isCap[i]) {
      ans += A[i]*(sum - A[i]);
      sum -= A[i];
    } else if (!isCap[(i+1)%N]) {
      ans += A[i]*A[(i+1)%N];
    }
  }
  cout << ans << endl;
  return 0;
}
