#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;

  ll joy = LLONG_MIN;
  for (int i=0;i<N;i++) {
    ll fi, ti; cin >> fi >> ti;

    if (ti > K) {
      joy = max(joy, fi-(ti-K));
    } else {
      joy = max(joy,fi);
    }
  }

  cout << joy << endl;

  return 0;
}
