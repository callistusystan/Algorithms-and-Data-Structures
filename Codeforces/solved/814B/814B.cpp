#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), B(N);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) cin >> B[i];
  vector<vi> ind(N+1);
  for (int i=0;i<N;i++) ind[A[i]].push_back(i);
  int missing, dupe;
  for (int i=1;i<=N;i++) {
    if (ind[i].empty()) missing = i;
    else if (ind[i].size() == 2) dupe = i;
  }
  int x = ind[dupe][0], y = ind[dupe][1];
  A[x] = missing;
  int nDiff = 0;
  for (int i=0;i<N;i++) if (A[i] != B[i]) nDiff++;
  if (nDiff != 1) swap(A[x], A[y]);
  for (int i=0;i<N;i++) cout << A[i] << " \n"[i==N-1];
  return 0;
}
