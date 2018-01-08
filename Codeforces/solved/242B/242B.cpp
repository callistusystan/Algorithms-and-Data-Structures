#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  int left = 1e9+5, right = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
    left = min(left, A[i].first);
    right = max(right, A[i].second);
  }
  for (int i=0;i<N;i++) {
    if (left == A[i].first && A[i].second == right) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << "-1\n";
  return 0;
}
