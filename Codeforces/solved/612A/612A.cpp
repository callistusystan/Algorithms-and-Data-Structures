#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,P,Q; cin >> N >> P >> Q;
  string S; cin >> S;
  for (int i=0;i<=N/P;i++) {
    int remain = N - i*P;
    if (remain%Q == 0) {
      cout << i + remain/Q << endl;
      if (i > 0) for (int j=0;j<i;j++) cout << S.substr(j*P, P) << endl;
      if (remain/Q > 0) for (int j=0;j<remain/Q;j++) cout << S.substr(i*P+j*Q, Q) << endl;
      return 0;
    }
  }
  cout << "-1\n";
  return 0;
}
