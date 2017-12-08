#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K; cin >> N >> K;
  ll N1 = (N+1)/2;

  if (K > N1) {
    cout << 2 + (K-N1-1)*2 << endl;
  } else {
    cout << 1 + (K-1)*2 << endl;
  }

  return 0;
}
