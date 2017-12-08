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
  int cnt0 = count(A.begin(), A.end(), 0);
  if (N == 1) {
    if (A[0] == 0) cout << "NO";
    else cout << "YES";
  } else {
    if (cnt0 == 1) cout << "YES";
    else cout << "NO";
  }
  cout << endl;
  return 0;
}
