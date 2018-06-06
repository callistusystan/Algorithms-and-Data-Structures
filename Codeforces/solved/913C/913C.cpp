#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;



int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, L; cin >> N >> L;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i+1<N;i++) A[i+1] = min(A[i+1], 2*A[i]);
  ll ans = -1, sum = 0;
  for (int i=N-1;i>=0;i--) {
    int need = L/(1<<i);
    sum += (ll) need*A[i];
    L -= need << i;
    if (ans == -1) ans = sum + (L > 0)*A[i];
    ans = min(ans, sum + (L > 0)*A[i]);
  }
  cout << ans << endl;
  return 0;
}
