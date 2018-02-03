#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  map<ll, ll> left, right;
  vector<ll> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    right[A[i]]++;
  }
  ll ans = 0;
  for (int i=0;i<N;i++) {
    right[A[i]]--;
    ll a=0,b=0;
    if (A[i]%K == 0) a = left[A[i]/K];
    b = right[A[i]*K];
    ans += a*b;
    left[A[i]]++;
  }
  cout << ans << endl;
  return 0;
}
