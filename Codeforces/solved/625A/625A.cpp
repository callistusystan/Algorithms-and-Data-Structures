#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,A,B,C; cin >> N >> A >> B >> C;
  if (N < B || A <= B-C) cout << N/A << endl;
  else {
    ll k = (N-B)/(B-C) + 1;
    N = N-k*(B-C);
    cout << k + N/A << endl;
  }
  return 0;
}
