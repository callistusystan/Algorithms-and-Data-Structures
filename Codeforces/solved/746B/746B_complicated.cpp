#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  string ans(N, '.');
  int i,j;
  i=0; j = (N-1)/2;
  while (i<N) {
    int k = N-1-j;
    ans[j] = S[i];
    i++;
    if (k != j) {
      ans[k] = S[i];
      i++;
    }
    j--;
  }

  cout << ans << endl;

  return 0;
}
