#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, D; cin >> N >> D;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  set<int> seen;
  for (int i=0;i<N;i++) {
    if (i == 0) seen.insert(A[0] - D);
    if (i == N-1) seen.insert(A[N-1]+ D);
    if (i && A[i-1]+D <= A[i]-D) seen.insert(A[i]-D);
    if (i < N-1 && A[i]+D <= A[i+1]-D) seen.insert(A[i]+D);
  }
  cout << seen.size() << endl;
  return 0;
}
