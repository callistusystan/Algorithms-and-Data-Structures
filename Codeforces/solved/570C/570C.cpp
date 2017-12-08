#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  string S(N+5,'a');
  for (int i=1;i<=N;i++) cin >> S[i];
  int nGroups, cnt;
  nGroups = cnt = 0;
  bool inGroup = false;
  for (int i=1;i<=N;i++) {
    if (S[i] == '.') {
      if (!inGroup) {
        inGroup = true;
        nGroups++;
      }
      cnt++;
    } else inGroup = false;
  }

  for (int i=0;i<M;i++) {
    int ai; char c; cin >> ai >> c;
    if (S[ai] == '.' && c != '.') {
      cnt--;
      if (S[ai-1] == '.' && S[ai+1] == '.') nGroups++;
      if (S[ai-1] != '.' && S[ai+1] != '.') nGroups--;
      S[ai] = c;
    } else if (S[ai] != '.' && c == '.') {
      cnt++;
      if (S[ai-1] != '.' && S[ai+1] != '.') nGroups++;
      if (S[ai-1] == '.' && S[ai+1] == '.') nGroups--;
      S[ai] = c;
    }
    cout << cnt - nGroups << endl;
  }
  return 0;
}
