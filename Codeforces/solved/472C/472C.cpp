#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vector<vector<string>> P(1e5+5, vector<string>(2));
vi A(1e5+5);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) cin >> P[i][0] >> P[i][1];
  for (int i=0;i<N;i++) {
    cin >> A[i]; A[i]--;
  }
  bool can = true;
  string prev = min(P[A[0]][0], P[A[0]][1]);
  for (int i=1;i<N;i++) {
    if (min(P[A[i]][0], P[A[i]][1]) > prev) prev = min(P[A[i]][0], P[A[i]][1]);
    else if (max(P[A[i]][0], P[A[i]][1]) > prev) prev = max(P[A[i]][0], P[A[i]][1]);
    else {
      can = false;
      break;
    }
  }
  if (can) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
