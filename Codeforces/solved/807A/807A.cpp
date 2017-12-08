#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> A(N, vi(2));
  bool rated = false;
  for (int i=0;i<N;i++) {
    cin >> A[i][0] >> A[i][1];
    if (A[i][0] != A[i][1]) rated = true;
  }
  if (rated) {
    cout << "rated\n";
  } else {
    bool maybe = true;
    for (int i=1;i<N;i++) {
      if (A[i][0] > A[i-1][0]) maybe = false;
    }
    if (maybe) cout << "maybe\n";
    else cout << "unrated\n";
  }
  return 0;
}
