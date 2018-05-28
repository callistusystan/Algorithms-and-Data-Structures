#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N/2);
  for (int i=0;i<N/2;i++) {
    cin >> A[i]; A[i]--;
  }
  sort(A.begin(), A.end());
  int res1 = 0, res2 = 0;
  for (int i=0;i<N/2;i++) {
    res1 += abs(i*2-A[i]);
    res2 += abs(i*2+1-A[i]);
  }
  cout << min(res1, res2) << endl;
  return 0;
}