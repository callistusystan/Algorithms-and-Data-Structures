#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  ll ans = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == 'Q') {
      for (int j=i+1;j<N;j++) {
        if (S[j] == 'A') {
          for (int k=j+1;k<N;k++) {
            if (S[k] == 'Q') ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
