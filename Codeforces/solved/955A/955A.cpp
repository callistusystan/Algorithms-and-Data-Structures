#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int HH, MM; cin >> HH >> MM;
  ll H,D,C,N; cin >> H >> D >> C >> N;
  int wait = 20*60 - (HH*60+MM);
  cout << fixed << setprecision(12);
  if (wait > 0) {
    cout << min((H+N-1)/N * C * 1.0, (H+wait*D+N-1)/N * 0.8 * C) << endl;
  } else cout << (H+N-1)/N * 0.8 * C << endl;
  return 0;
}
