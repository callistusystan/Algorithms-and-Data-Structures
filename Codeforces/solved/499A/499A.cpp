#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, X; cin >> N >> X;
  vector<pii> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }
  int cur = 1, ans = 0;
  for (int i=0;i<N;i++) {
    cur += (A[i].first-cur)/X*X;
    ans += A[i].second-cur+1;
    cur = A[i].second + 1;
  }

  cout << ans << endl;

  return 0;
}
