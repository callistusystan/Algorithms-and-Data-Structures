#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<vi> A(N, vi(M));
  for (int i=0;i<N;i++) 
    for (int j=0;j<M;j++) cin >> A[i][j];
  int mn = *min_element(A[0].begin(), A[0].end());
  int bestK = -1, best = -1;
  vector<pair<vi, vi>> memo(mn+1);
  for (int k=0;k<=mn;k++)  {
    vi row(N), col(M);
    int res = k;
    row[0] = k;
    for (int j=0;j<M;j++) {
      res += A[0][j] - row[0];
      col[j] = A[0][j] - row[0];
    }
    bool can = true;
    for (int i=1;i<N;i++) {
      set<int> seen;
      for (int j=0;j<M;j++) {
        if (A[i][j] < col[j]) can = false;
        seen.insert(A[i][j] - col[j]);
      }
      if (!can) break;
      if ((int)seen.size() > 1) {
        can = false;
        break;
      }
      row[i] = *seen.begin();
      res += *seen.begin();
    }
    if (!can) continue;
    if (best == -1 || res < best) {
      best = res;
      bestK = k;
    }
    memo[k].first = row; memo[k].second = col;
  }
  if (best == -1) {
    cout << "-1\n";
    return 0;
  }
  cout << best << endl;
  for (int i=0;i<N;i++)  
    if (memo[bestK].first[i])
      while (memo[bestK].first[i]--) cout << "row " << i+1 << endl;
  for (int i=0;i<M;i++)  
    if (memo[bestK].second[i])
      while (memo[bestK].second[i]--) cout << "col " << i+1 << endl;
  return 0;
}
