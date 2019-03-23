#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<vi> A(1e5+5);
  int ans = 0;
  for (int i=0;i<N;i++) {
    int si, ri; cin >> si >> ri;
    A[si].push_back(ri);
    ans = max(ans, ri);
  }
  vi sums(N);
  for (int i=1;i<=M;i++) {
    sort(A[i].begin(), A[i].end());
    reverse(A[i].begin(), A[i].end());
    for (int j=1;j<(int)A[i].size();j++) A[i][j] += A[i][j-1];
  }
  for (int i=1;i<=M;i++) {
    for (int j=0;j<(int)A[i].size();j++) {
      if (A[i][j] < 0) break;
      sums[j] += A[i][j];
    }
  }
  cout << *max_element(sums.begin(), sums.end()) << endl;
  return 0;
}
