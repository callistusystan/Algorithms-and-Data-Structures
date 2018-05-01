#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool isBeautiful(string &s) {
  int n1 = count(s.begin(), s.end(), '1'), n0 = count(s.begin(), s.end(), '0');
  if (n1 <= 1 && n0+n1 == (int)s.size()) return true;
  return false;  
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  string prefix;
  int n0 = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i] == "0") {
      cout << "0\n";
      return 0;
    }
    if (!isBeautiful(A[i])) prefix = A[i];
    else n0 += count(A[i].begin(), A[i].end(), '0');
  }
  if (prefix == "") {
    cout << A[0];
    n0 -= count(A[0].begin(), A[0].end(), '0');
  } else cout << prefix;
  while (n0--) cout << 0;
  cout << endl;
  return 0;
}
