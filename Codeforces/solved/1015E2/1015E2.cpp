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
  vector<vi> hor(N, vi(M)), ver(N, vi(M));
  for (int i=1;i<N-1;i++) {
    int l=0, r;
    while (l < M) {
      while (l < M && A[i][l] != '*') l++;
      r = l;
      while (r < M && A[i][r] == '*') r++;
      r--;
      for (int j=l;j<=r;j++) hor[i][j] = min(abs(j-l), abs(j-r));
      l = r+1;
    }
  }
  for (int j=1;j<M-1;j++) {
    int t=0, b;
    while (t < N) {
      while (t < N && A[t][j] != '*') t++;
      b = t;
      while (b < N && A[b][j] == '*') b++;
      b--;
      for (int i=t;i<=b;i++) ver[i][j] = min(abs(i-t), abs(i-b));
      t = b+1;
    }    
  }

  vector<vi> accountedVer(N, vi(M)), accountedHor(N, vi(M));
  for (int i=1;i<N-1;i++) {
    for (int j=1;j<M-1;j++) {
      if (A[i][j] != '*') continue;
      // check if is star
      int size = min(hor[i][j], ver[i][j]);
      if (size >= 1) {
        stars.push_back({ { i, j }, size });
        accountedHor[i][j-size]++;
        if (j+size+1 < M) accountedHor[i][j+size+1]--;
        accountedVer[i-size][j]++;
        if (i+size+1 < N) accountedVer[i+size+1][j]--;
      }
    }
  }

  for (int i=0;i<N;i++) {
    int cnt = 0;
    for (int j=0;j<M;j++) {
      cnt += accountedHor[i][j];
      accounted[i][j] += cnt;
    }
  }
  for (int j=0;j<M;j++) {
    int cnt = 0;
    for (int i=0;i<N;i++) {
      cnt += accountedVer[i][j];
      accounted[i][j] += cnt;
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
