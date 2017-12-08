#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  if (N == K || K == 0) cout << "0 0";
  else {
    cout << 1 << " " << min(N-K, 2*K);
  }
  cout << endl;
  return 0;
}
