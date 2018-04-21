#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S >> T;
  int N = S.size();
  int n47 = 0, n74 = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == '4' && T[i] == '7') n47++;
    else if (S[i] == '7' && T[i] == '4') n74++;
  }
  // ans = min(n47, n74) + max(n47, n74) - min(n47, n74)
  cout << max(n47, n74) << endl;
  return 0;
}
