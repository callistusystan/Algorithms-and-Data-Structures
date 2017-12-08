#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vector<vector<string>> P(1e5+5, vector<string>(2));
vi A(1e5+5);
vector<vi> memo(1e5+5, vi(2,-1));

bool rec(int id, int use) {
  if (id == N-1) return true;
  if (memo[id][use] != -1) return memo[id][use];
  bool ans = false;
  if (P[A[id+1]][0] > P[A[id]][use]) ans |= rec(id+1, 0);
  if (P[A[id+1]][1] > P[A[id]][use]) ans |= rec(id+1, 1);

  memo[id][use] = ans;
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  for (int i=0;i<N;i++) cin >> P[i][0] >> P[i][1];
  for (int i=0;i<N;i++) {
    cin >> A[i]; A[i]--;
  }
  if (rec(0,0) || rec(0,1)) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
