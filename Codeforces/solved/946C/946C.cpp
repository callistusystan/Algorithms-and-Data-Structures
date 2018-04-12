#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  char cur = 'a';
  for (int i=0;i<N;i++) {
    if (S[i] <= cur) {
      S[i] = cur;
      cur++;
    }
    if (cur > 'z') break;
  }
  if (cur > 'z') cout << S << endl;
  else cout << "-1\n";
  return 0;
}
