#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  char a, b; cin >> a >> b;
  int N; cin >> N;

  string A = "^>v<";
  int start = A.find(a);
  int cw, ccw;
  cw = (start + N)%4;
  ccw = (start - N)%4;
  if (ccw < 0) ccw += 4;

  if (A[cw] == A[ccw]) cout << "undefined";
  else if (A[cw] == b) cout << "cw";
  else if (A[ccw] == b) cout << "ccw";
  else cout << "undefined";
  cout << endl;

  return 0;
}
