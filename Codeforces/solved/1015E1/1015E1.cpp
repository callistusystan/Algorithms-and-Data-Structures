#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];

  vector<vi> accounted(N, vi(M));
  vector<pair<pii, int>> stars;
  for (int i=1;i<N-1;i++) {
    for (int j=1;j<M-1;j++) {
      if (A[i][j] != '*') continue;
      // check if is star
      int size = 1;
      while (1) {
        bool inRange = (i-size >= 0) && (i+size < N) && (j-size >= 0) && (j+size < M);
        if (inRange && (A[i-size][j] == '*') && (A[i+size][j] == '*') && (A[i][j-size] == '*') && (A[i][j+size] == '*')) {
          if (size > 1) stars.pop_back();
          stars.push_back({ { i, j }, size });
          accounted[i][j] = accounted[i-size][j] = accounted[i+size][j] = accounted[i][j-size] = accounted[i][j+size] = 1;
        } else break;
        size++;
      }
    }
  }
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      if (A[i][j] == '*' && !accounted[i][j]) {
        cout << "-1\n";
        return 0;
      }
    }
  }
  cout << stars.size() << endl;
  for (auto p : stars) {
    auto coords = p.first;
    cout << coords.first+1 << " " << coords.second+1 << " " << p.second << endl;
  }
  return 0;
}
