#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N + 5);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (i) A[i] += A[i-1];
  }

  ll S = A[N-1];
  if (S%3) {
    cout << 0 << endl;
    return 0;
  }
  S /= 3;

  vector<ll> cnt(N + 5);
  for (int i=N-2;i>=0;i--) {
    cnt[i] = cnt[i+1];
    if (A[i] == 2*S) {
      cnt[i]++;
    }
  }

  ll ans = 0;
  for (int i=0;i<N-2;i++) {
    if (A[i]*3 == A[N-1]) {
      ans += cnt[i+1];
    }
  }

  cout << ans << endl;
  return 0;
}
