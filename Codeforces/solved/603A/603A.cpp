#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vector<vi>> memo(1e5+5, vector<vi>(2, vi(2, -1)));
int N;
string S;

int rec(int cur, int d, int canFlip) {
  if (cur == N) return 0;
  else if (memo[cur][d][canFlip] != -1) return memo[cur][d][canFlip];
  if (S[cur]-'0' == d) memo[cur][d][canFlip] = 1 + rec(cur+1, 1-d, canFlip);
  else if (canFlip) memo[cur][d][canFlip] = 1 + rec(cur+1, 1-d, 0);

  return memo[cur][d][canFlip] = max(memo[cur][d][canFlip], rec(cur+1, d, canFlip));
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> S;
  cout << rec(0, S[0]-'0', 1) << endl;
  return 0;
}
