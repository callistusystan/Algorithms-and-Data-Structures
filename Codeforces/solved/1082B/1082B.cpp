#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  vi left(N), right(N);
  int cur = 0, ans = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == 'G') cur++;
    else cur = 0;
    ans = max(ans, cur);
    left[i] = cur;
  }
  cur = 0;
  for (int i=N-1;i>=0;i--) {
    if (S[i] == 'G') cur++;
    else cur = 0;
    right[i] = cur;
  }
  int cntG = count(S.begin(), S.end(), 'G');
  if (S[0] == 'S' && right[1] < cntG) ans = max(ans, 1+right[1]);
  if (S[N-1] == 'S' && left[N-2] < cntG) ans = max(ans, 1+left[N-2]);
  for (int i=1;i<N-1;i++) {
    if (S[i] == 'G') continue;
    ans = max(ans, left[i-1]+right[i+1]+(left[i-1]+right[i+1] < cntG ? 1 : 0));
  }
  cout << ans << endl;
  return 0;
}
