#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, ll> pil;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pil> A, B;
  for (int i=0;i<N;i++) {
    int x; ll y;
    cin >> x >> y;
    if (x < 0) A.push_back({x, y});
    else B.push_back({x, y});
  }
  sort(A.begin(), A.end(), greater<pil>());
  sort(B.begin(), B.end());

  int n = min(A.size(), B.size());
  ll res = 0;
  for (int i=0;i<n;i++) {
    res += A[i].second;
    res += B[i].second;
  }
  if (A.size() > B.size()) res += A[n].second;
  else if (B.size() > A.size()) res += B[n].second;

  cout << res << endl;

  return 0;
}
