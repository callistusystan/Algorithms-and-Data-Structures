#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int fac(int n) {
  if (n == 1) return 1;
  return n*fac(n-1);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  deque<int> A, B;
  int n; cin >> n;
  for (int i=0;i<n;i++) {
    int ai; cin >> ai;
    A.push_back(ai);
  }

  cin >> n;
  for (int i=0;i<n;i++) {
    int bi; cin >> bi;
    B.push_back(bi);
  }

  int ans = 0;
  int cycleL = fac(11);
  while (ans <= cycleL) {
    if (A.size() == 0 || B.size() == 0) break;
    if (A.front() > B.front()) {
      A.push_back(B.front());
      A.push_back(A.front());
    } else {
      B.push_back(A.front());
      B.push_back(B.front());
    }
    A.pop_front();
    B.pop_front();
    ans++;
  }

  if (ans > cycleL) {
    cout << -1;
  } else {
    cout << ans << " ";
    if (A.size() > 0) cout << 1;
    else cout << 2;
  }
  cout << endl;

  return 0;
}
