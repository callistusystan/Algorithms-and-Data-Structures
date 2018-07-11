#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first;
    A[i].second = i+1;
  }
  if (N == 1) cout << "-1\n";
  else if (N == 2 && A[0].first == A[1].first) cout << "-1\n";
  else {
    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());
    cout << N-1 << endl;
    for (int i=0;i<N-1;i++) cout << A[i].second << " \n"[i==N-2];
  }
  return 0;
}
