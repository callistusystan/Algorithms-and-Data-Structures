#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  cout << min(N,M)+1 << endl;
  for (int i=0;i<=min(N,M);i++) {
    cout << i << " " << min(N,M)-i << endl;
  }
  return 0;
}
