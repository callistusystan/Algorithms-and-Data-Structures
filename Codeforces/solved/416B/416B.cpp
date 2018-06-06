#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int M, N; cin >> M >> N;
  vector<vi> A(M, vi(N));
  for (int i=0;i<M;i++) for (int j=0;j<N;j++) cin >> A[i][j];
  vi ans(M), time(N);
  for (int i=0;i<M;i++) {
    for (int j=0;j<N;j++) {
      time[j] = max(time[j], ans[i]);
      time[j] += A[i][j];
      ans[i] = time[j];
    }
  }
  for (int i : ans) cout << i << " ";
  cout << endl; 
  return 0;
}
