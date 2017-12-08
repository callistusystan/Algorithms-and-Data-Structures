#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int ans = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == '<') ans++;
    else break;
  }
  for (int i=N-1;i>=0;i--) {
    if (S[i] == '>') ans++;
    else break;
  }
  cout << ans << endl;
  return 0;
}
