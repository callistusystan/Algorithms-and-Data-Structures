#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,K; cin >> N >> K;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  int l = 0, r = N-1, ans = 0;
  while (l <= r) {
    if (A[l] <= K) ans++, l++;
    else if (A[r] <= K) ans++, r--;
    else break;
  }
  cout << ans << endl;
  return 0;
}
