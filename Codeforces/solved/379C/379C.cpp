#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first;
    A[i].second = i;
  }
  sort(A.begin(), A.end());
  vi ans(N);
  int cur = 0;
  for (int i=0;i<N;i++) {
    cur = max(cur, A[i].first);
    ans[A[i].second] = cur;
    cur++;
  }
  for (int i=0;i<N;i++)
    cout << ans[i] << " \n"[i==N-1];
  return 0;
}
