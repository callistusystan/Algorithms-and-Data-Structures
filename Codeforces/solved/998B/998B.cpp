#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, B; 
vi A(105), psum(105);
vector<vector<vi>> memo(105, vector<vi>(105, vi(105, -1)));

int rec(int cur, int last, int remain) {
  if (cur == N-1) return 0;
  else if (memo[cur][last][remain] != -1) return memo[cur][last][remain];
  int ans = rec(cur+1, last, remain);
  if ((psum[cur]-psum[last-1])*2 == cur-last+1) {
    int cost = abs(A[cur+1]-A[cur]);
    if (remain >= cost)
      ans = max(ans, 1 + rec(cur+1, cur+1, remain-cost));
  }
  return memo[cur][last][remain] = ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> B;
  for (int i=1;i<=N;i++) {
    cin >> A[i];
    psum[i] = A[i]%2;
    psum[i] += psum[i-1];
  }
  cout << rec(1, 1, B) << endl;  
  return 0;
}
