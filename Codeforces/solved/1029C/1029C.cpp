#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  multiset<int> left, right;
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
    left.insert(A[i].first);
    right.insert(A[i].second);
  }
  int ans = 0;
  for (int i=0;i<N;i++) {
    left.erase(left.find(A[i].first));
    right.erase(right.find(A[i].second));

    auto it = left.end();
    it--;
    ans = max(ans, max(0, *right.begin() - *it));

    left.insert(A[i].first);
    right.insert(A[i].second);
  }
  cout << ans << endl;
  return 0;
}
