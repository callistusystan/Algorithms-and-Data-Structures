#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi P(N);
  for (int i=0;i<N;i++) cin >> P[i];
  sort(P.begin(), P.end());

  int Q; cin >> Q;
  for (int i=0;i<Q;i++) {
    int mi; cin >> mi;

    cout << upper_bound(P.begin(), P.end(), mi) - P.begin() << endl;
  }

  return 0;
}
