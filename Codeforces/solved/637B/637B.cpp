#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  set<string> seen;
  for (int i=N-1;i>=0;i--) {
    if (!seen.count(A[i])) cout << A[i] << endl;
    seen.insert(A[i]);
  }
  return 0;
}
