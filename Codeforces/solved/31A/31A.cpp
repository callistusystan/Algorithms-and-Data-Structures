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
  map<int, pii> sum;
  for (int i=0;i+1<N;i++) for (int j=i+1;j<N;j++) sum[A[i]+A[j]] = {i,j};
  for (int i=0;i<N;i++) {
    if (sum.count(A[i])) {
      cout << i+1 << " " << sum[A[i]].first+1 << " " << sum[A[i]].second+1 << endl;
      return 0;
    }
  }
  cout << "-1\n";
  return 0;
}
