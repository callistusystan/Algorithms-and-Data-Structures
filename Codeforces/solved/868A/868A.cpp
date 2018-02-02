#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string P; cin >> P;
  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i] == P) {
      cout << "YES\n";
      return 0;
    }
  }
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      string a,b;
      a = A[i]+A[j];
      b = A[j]+A[i];
      if (a.find(P) != string::npos || b.find(P) != string::npos) {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";
  return 0;
}
