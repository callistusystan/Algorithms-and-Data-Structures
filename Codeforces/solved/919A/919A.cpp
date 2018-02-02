#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  double a,b; cin >> a >> b;
  double best = a/b*M;
  for (int i=0;i<N-1;i++) {
    cin >> a >> b;
    best = min(best, a/b*M);
  }
  cout << fixed << setprecision(8) << best << endl;
  return 0;
}
