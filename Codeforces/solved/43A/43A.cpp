#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int c1,c2;
  c1 = c2 = 0;
  vector<string> A(N);
  string t2;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i] == A[0]) c1++;
    else {
      t2 = A[i];
      c2++;
    }
  }

  if (c1 > c2) cout << A[0];
  else cout << t2;
  cout << endl;

  return 0;
}
