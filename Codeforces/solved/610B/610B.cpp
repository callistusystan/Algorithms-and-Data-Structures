#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    A.push_back(A[i]);
  }
  int mn = *min_element(A.begin(), A.end());
  int prev = 0;
  ll len = 0;
  while (A[prev] != mn) prev++;
  for (int i=prev+1;i<2*N;i++) {
    if (A[i] == mn) {
      len = max(len, (ll)i-prev-1);
      prev = i;
    }
  }
  cout << (ll)mn*N + len << endl;
  return 0;
}
