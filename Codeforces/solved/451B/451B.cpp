#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int N; cin >> N;
  vi A(N), B(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    B[i] = A[i];
  }

  sort(B.begin(), B.end());

  int l,r;
  l = r = -1;
  for (int i=0;i<N;i++) {
    if (A[i] != B[i]) {
      if (l == -1) l = i;
      else r = i;
    }
  }

  if (l == -1 && r == -1) {
    cout << "yes" << endl;
    cout << "1 1" << endl;
  } else {
    reverse(B.begin()+l, B.begin()+r+1);
    bool can = true;
    for (int i=l;i<=r;i++) {
      if (A[i] != B[i]) can = false;
    }
    if (can) {
      cout << "yes" << endl;
      cout << l+1 << " " << r+1 << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}
