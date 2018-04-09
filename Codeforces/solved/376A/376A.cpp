#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  int p = S.find('^');
  ll balance = 0;
  for (int i=0;i<p;i++) {
    if (isdigit(S[i]))
      balance += (ll)(p-i)*(S[i]-'0');
  }
  for (int i=p+1;i<N;i++) {
    if (isdigit(S[i]))
      balance -= (ll)(i-p)*(S[i]-'0');
  }
  if (balance > 0) cout << "left\n";
  else if (balance == 0) cout << "balance\n";
  else cout << "right\n";
  return 0;
}
