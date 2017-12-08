#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(1005);
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai]++;
  }
  bool can = true;
  for (int i=0;i<1005;i++) {
    if (N-A[i] < A[i]-1) can = false;
  }
  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
