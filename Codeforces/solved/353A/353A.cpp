#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  int S1,S2;
  S1 = S2 = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
    S1 += A[i].first;
    S2 += A[i].second;
  }

  if ((S1%2 == 0) && (S2%2 == 0)) {
    cout << 0;
  } else if ((S1%2) && (S2%2)) {
    bool can = false;
    for (int i=0;i<N;i++) {
      if ((A[i].first%2) != (A[i].second%2)) can = true;
    }
    if (can) cout << 1;
    else cout << -1;
  } else cout << -1;
  cout << endl;

  return 0;
}
