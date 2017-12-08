#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  for (int i=0;i<N;i++) cin >> A[i].first >> A[i].second;
  if (N == 1 ||
     (N == 2 && !(A[0].first != A[1].first && A[0].second != A[1].second)))
     cout << -1;
  else {
    int l, w;
    for (int i=1;i<N;i++) {
      if (A[i].first != A[0].first) l = abs(A[i].first - A[0].first);
      if (A[i].second != A[0].second) w = abs(A[i].second - A[0].second);
    }
    cout << l*w;
  }
  cout << endl;
  return 0;
}
