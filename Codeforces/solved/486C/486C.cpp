#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int mod(int a, int b) {
  return ((a%b)+b)%b;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,P; cin >> N >> P;
  P--;
  string S; cin >> S;
  if (P >= N/2) {
    reverse(S.begin(), S.end());
    P = N-1-P;
  }
  int left = 1e5, right = 0, ans = 0;
  bool isPal = true;
  for (int i=0;i<N/2;i++) {
    if (S[i] != S[N-1-i]) {
      ans += min(mod(S[i]-S[N-1-i], 26), mod(S[N-1-i]-S[i],26));
      left = min(left, i);
      right = max(right, i);
      isPal = false;
    }
  }
  if (isPal) {
    cout << "0\n";
    return 0;
  }
  ans += min(abs(left-P), abs(right-P));
  ans += right-left;
  cout << ans << endl;
  return 0;
}
