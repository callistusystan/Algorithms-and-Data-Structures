#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,X; cin >> N >> X;
  ll S = 0;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    S += ai;
  }

  cout << (abs(S)+X-1)/X << endl;

  return 0;
}
