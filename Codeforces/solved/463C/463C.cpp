#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> A(N, vi(N));
  vector<ll> pos(2*N-1), neg(2*N-1);
  for (int i=0;i<N;i++) 
    for (int j=0;j<N;j++) {
      cin >> A[i][j];
      pos[i+j] += A[i][j];
      neg[N-1+i-j] += A[i][j];
    }
  vector<ll> best(2); vector<pii> loc(2);
  for (int i=0;i<N;i++) {
    for (int j=0;j<N;j++) {
      if (pos[i+j]+neg[N-1+i-j]-A[i][j] >= best[(i+j)%2]) {
        best[(i+j)%2] = pos[i+j]+neg[N-1+i-j]-A[i][j];
        loc[(i+j)%2].first = i+1;
        loc[(i+j)%2].second = j+1;
      }
    }
  }
  cout << best[0]+best[1] << endl;
  cout << loc[0].first << " " << loc[0].second << " " << loc[1].first << " " << loc[1].second << endl;
  return 0;
}
