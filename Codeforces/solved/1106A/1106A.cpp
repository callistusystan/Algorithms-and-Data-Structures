#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int dr[5] = {-1,-1,0,1,1};
int dc[5] = {-1,1,0,-1,1};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int ans = 0;
  for (int i=1;i+1<N;i++) {
    for (int j=1;j+1<N;j++) {
      int cnt = 0;
      for (int k=0;k<5;k++) {
        int r = i+dr[k], c = j+dc[k];
        cnt += A[r][c] == 'X';
      }
      ans += cnt == 5;
    }
  }
  cout << ans << endl;
  return 0;
}
