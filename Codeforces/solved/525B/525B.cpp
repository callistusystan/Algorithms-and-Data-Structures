#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vi sum(3e5+5);

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  N = S.size();
  int M; cin >> M;
  while (M--) {
    int ai; cin >> ai;
    sum[ai]++;
    sum[N-ai+2]++;
  }
  int cur = 0;
  for (int i=0;i<N;i++) {
    cur = (cur+sum[i+1])%2;
    if (cur) cout << S[N-1-i];
    else cout << S[i];
  }
  cout << endl;
  return 0;
}
