#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A(1000), ans(1000), dfs_lo(1000), dfs_num(1000), S, in_stack(1000);
int id = 1;

void dfs(int u) {
  dfs_lo[u] = dfs_num[u] = id++;
  S.push_back(u);
  in_stack[u] = 1;
  if (!dfs_num[A[u]]) dfs(A[u]);
  if (in_stack[A[u]]) dfs_lo[u] = min(dfs_lo[u], dfs_lo[A[u]]);
  if (dfs_lo[u] == dfs_num[u]) {
    if (u == S.back()) {
      ans[u] = A[u] == u ? u : ans[A[u]];
      S.pop_back();
      in_stack[u] = 0;
      return;
    }
    int v;
    do {
      v = S.back(); S.pop_back();
      in_stack[v] = 0;
      ans[v] = v;
    } while (u != v);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    A[i]--;
  }
  for (int i=0;i<N;i++) {
    if (!dfs_num[i]) dfs(i);
    cout << ans[i]+1 << " ";
  }
  cout << endl;
  return 0;
}
