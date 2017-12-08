#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K;
  string S; cin >> S >> K;
  N = S.size();
  set<char> all;
  for (int i=0;i<N;i++) {
    all.insert(S[i]);
  }
  if (N < K) {
    cout << "impossible\n";
  } else if ((int)all.size() >= K) {
    cout << 0 << endl;
  } else {
    cout << abs(K - (int)all.size()) << endl;
  }
  return 0;
}
