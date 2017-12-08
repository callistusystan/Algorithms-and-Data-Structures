#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi row(N), col(N);
  for (int i=0;i<N;i++) {
    string S; cin >> S;
    for (int j=0;j<N;j++) {
      if (S[j] == 'C') {
        row[i]++;
        col[j]++;
      }
    }
  }

  int ans = 0;
  for (int i=0;i<N;i++) {
    if (row[i] >= 2)
      ans += (row[i]*(row[i]-1))/2;
  }
  for (int i=0;i<N;i++) {
    if (col[i] >= 2)
      ans += (col[i]*(col[i]-1))/2;
  }
  cout << ans << endl;

  return 0;
}
