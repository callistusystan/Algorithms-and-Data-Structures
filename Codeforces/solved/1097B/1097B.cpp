#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N; 
vi A(15);

bool rec(int cur, int angle) {
  if (cur == N) return angle == 0;
  return rec(cur+1, (angle+A[cur])%360) || rec(cur+1, (angle-A[cur]+360)%360);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) cin >> A[i];
  if (rec(0, 0)) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
