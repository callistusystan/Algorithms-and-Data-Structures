#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  // try rbrb..
  int cntR, cntB;
  cntR = cntB = 0;
  for (int i=0;i<N;i++) {
    if (i%2 && S[i] == 'r') cntR++;
    else if (i%2 == 0 && S[i] == 'b') cntB++;
  }
  int best = min(cntR, cntB) + (max(cntR, cntB)) - min(cntR, cntB);

  // try brbr..
  cntR = cntB = 0;
  for (int i=0;i<N;i++) {
    if (i%2 && S[i] == 'b') cntB++;
    else if (i%2 == 0 && S[i] == 'r') cntR++;
  }
  best = min(best, max(cntR, cntB));

  cout << best << endl;
  return 0;
}
