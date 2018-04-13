#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K; cin >> K;
  string S; cin >> S;
  int N = S.size();
  vi ps(N);
  for (int i=0;i<N;i++)
    ps[i] = (i ? ps[i-1] : 0) + (S[i] == '1');
  ll ans = 0;
  int l=0,r=0;
  for (int i=0;i<N;i++) {
    l = max(l, i); r = max(r, i);
    int val = (i ? ps[i-1] : 0) + K;
    while (l < N && ps[l] < val) l++;
    while (r < N && ps[r] <= val) r++;
    ans += r-l;
  }
  cout << ans << endl;
  return 0;
}
