#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool solve() {
  int N; cin >> N;
  string S; cin >> S;
  if (N == 1 && S == "1") return true;
  else {
    vector<bool> can(N + 5, 1);
    for (int i=0;i<N;i++) {
      if (S[i] == '1') {
        if (i) can[i-1] = 0;
        can[i+1] = 0;
      }
    }
    for (int i=0;i<N;i++) {
      if (S[i] == '1' && !can[i]) return false;
      if (S[i] == '0' && can[i]) return false;
    }
    return true;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  if (solve()) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
