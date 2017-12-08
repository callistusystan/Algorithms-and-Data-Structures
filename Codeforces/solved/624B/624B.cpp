#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  ll ans = 0; set<ll> used;
  for (int i=0;i<N;i++) {
    while (A[i] && used.count(A[i])) A[i]--;
    ans += A[i];
    used.insert(A[i]);
  }
  cout << ans << endl;
  return 0;
}
