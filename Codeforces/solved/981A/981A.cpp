#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  int ans = 0;
  for (int i=0;i<N;i++) {
    for (int j=i;j<N;j++) {
      bool isPal = true;
      for (int k=i;k<=(i+j)/2;k++) 
        if (S[k] != S[j-k]) isPal = false;
      if (!isPal) ans = max(ans, j-i+1);
    }
  }
  cout << ans << endl;
  return 0;
}
