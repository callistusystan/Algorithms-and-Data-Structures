#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int ans = 0;
  set<int> seen;
  for (int i=0;i<N;i++) {
    if (A[i] > N || seen.count(A[i])) ans++;
    seen.insert(A[i]);
  }
  cout << ans << endl;
  return 0;
}
