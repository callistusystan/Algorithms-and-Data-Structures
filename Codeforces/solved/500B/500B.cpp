#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A(305), nums, indices;
vector<vi> adjList(305);
vector<bool> visited(305);

void dfs(int u) {
  visited[u] = true;
  nums.push_back(A[u]);
  indices.push_back(u);
  for (int v : adjList[u]) {
    if (!visited[v]) dfs(v);
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) {
    string si; cin >> si;
    for (int j=0;j<N;j++) {
      if (si[j] == '1')
        adjList[i].push_back(j);
    }
  }
  for (int i=0;i<N;i++) {
    if (!visited[i]) {
      nums.clear(); indices.clear();
      dfs(i);
      sort(nums.begin(), nums.end());
      sort(indices.begin(), indices.end());
      for (int j=0;j<(int)nums.size();j++) A[indices[j]] = nums[j];
    }
  }
  for (int i=0;i<N;i++) {
    cout << A[i] << " \n"[i==N-1];
  }
  return 0;
}
