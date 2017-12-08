#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int REST = 0, CONTEST = 1, GYM = 2, BOTH = 3, N;
vi A(105);
vector<vi> memo(105, vi(5, -1));

int rec(int id, int prev) {
  if (id == N) return 0;
  if (memo[id][prev] != -1) return memo[id][prev];

  memo[id][prev] = 1+rec(id+1, REST);
  if (prev != CONTEST && (A[id] == CONTEST || A[id] == BOTH)) {
    memo[id][prev] = min(memo[id][prev], rec(id+1, CONTEST));
  }
  if (prev != GYM && (A[id] == GYM || A[id] == BOTH)) {
    memo[id][prev] = min(memo[id][prev], rec(id+1, GYM));
  }
  return memo[id][prev];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  for (int i=0;i<N;i++) cin >> A[i];

  cout << rec(0, 0) << endl;

  return 0;
}
