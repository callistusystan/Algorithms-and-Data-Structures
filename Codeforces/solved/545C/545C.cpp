#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int NOTHING = 0, LEFT = 1 , RIGHT = 2;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pair<ll, ll>> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }
  int prev = LEFT;
  int ans = 1;
  for (int i=1;i<N;i++) {
    bool needRight = false;
    if (prev == RIGHT) {
      if (A[i].first-A[i].second > A[i-1].first + A[i-1].second) {
        ans++;
        prev = LEFT;
      } else needRight = true;
    } else {
      if (A[i].first-A[i].second > A[i-1].first) {
        ans++;
        prev = LEFT;
      } else needRight = true;
    }

    if (needRight) {
      if (i == N-1 || A[i].first+A[i].second < A[i+1].first) {
        ans++;
        prev = RIGHT;
      } else {
        prev = NOTHING;
      }
    }
  }

  cout << ans << endl;

  return 0;
}
