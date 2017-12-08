#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N, K;
vi A(505);
vector<vi> memo(505, vi(505,-1));
vi walks(505);

int rec(int id, int prev) {
  if (id == N) return 0;
  if (memo[id][prev] != -1) return memo[id][prev];

  int ans = 505;
  int need = max(0,K-prev-A[id]);
  for (int i=need;i<=K-A[id];i++) {
    int res = i + rec(id+1, A[id]+i);
    if (res < ans) {
      ans = res;
    }
  }

  return memo[id][prev] = ans;
}

void getWalks(int id, int prev) {
  if (id == N) return;

  int need = max(0,K-prev-A[id]);
  for (int i=need;i<=K;i++) {
    int res = i + rec(id+1, A[id]+i);
    if (res == memo[id][prev]) {
      walks[id] = A[id]+i;
      getWalks(id+1, A[id]+i);
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> K;
  for (int i=0;i<N;i++) cin >> A[i];

  cout << rec(0,K) << endl;
  getWalks(0, K);

  for (int i=0;i<N;i++) {
    cout << walks[i] << " \n"[i==N-1];
  }

  return 0;
}
