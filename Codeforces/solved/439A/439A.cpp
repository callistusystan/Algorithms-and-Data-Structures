#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,D; cin >> N >> D;
  int S = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    S += ai;
  }
  int B = (N-1)*10;

  if (S + B > D) cout << -1;
  else {
    D -= S;
    cout << D/5;
  }
  cout << endl;

  return 0;
}
