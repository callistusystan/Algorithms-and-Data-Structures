#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int cur = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == '0') {
      cout << cur;
      cur = 0;
    } else cur++;
  }
  cout << cur << endl;
  return 0;
}
