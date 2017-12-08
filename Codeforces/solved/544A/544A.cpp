#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K; cin >> K;
  string Q; cin >> Q;
  int N = Q.size();
  set<char> seen;
  vi starts;
  for (int i=0;i<N;i++) {
    if (!seen.count(Q[i])) {
      starts.push_back(i);
      seen.insert(Q[i]);
    }
  }
  if ((int)starts.size() < K) cout << "NO\n";
  else {
    cout << "YES\n";
    int L = (int)starts.size();
    for (int i=0;i<L;i++) {
      if (i == K) break;
      if (i+1<L && i < K-1)
        cout << Q.substr(starts[i], starts[i+1]-starts[i]) << endl;
      else
        cout << Q.substr(starts[i]) << endl;
    }
  }
  return 0;
}
