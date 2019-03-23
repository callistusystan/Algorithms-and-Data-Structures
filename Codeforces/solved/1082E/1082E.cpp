#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A(5e5+5), cntC(5e5+5), last(5e5+5, -1);
vector<vi> segs(5e5+5);

int f(int l, int r) {
  return cntC[r] - (l ? cntC[l-1] : 0);
}

int g(int x) {
  int res = 0, cur = 0, n = segs[x].size();
  for (int i=0;i<n;i++) {
    cur = max(0, cur+segs[x][i]);
    res = max(res, cur);
  }
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, C; cin >> N >> C;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) {
    cntC[i] = A[i] == C;
    if (i) cntC[i] += cntC[i-1];
  }
  for (int i=0;i<N;i++) {
    segs[A[i]].push_back(-f(last[A[i]]+1, i));
    last[A[i]] = i;
    segs[A[i]].push_back(1);
  }
  for (int i=0;i<5e5+5;i++)
    segs[A[i]].push_back(-f(last[i]+1, N-1));
  int ans = 0;
  for (int i=0;i<5e5+5;i++) {
    if (i == C) continue;
    ans = max(ans, g(i));
  }
  cout << cntC[N-1] + ans << endl;
  return 0;
}
