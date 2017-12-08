#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  vi memo(N+5, 0);

  for (int i=0;i<N-1;i++) {
    if (i) memo[i] = memo[i-1];
    if (S[i] == S[i+1]) memo[i] += 1;
  }

  int M; cin >> M;
  for (int i=0;i<M;i++) {
    int L,R; cin >> L >> R;
    L--; R-=2;
    cout << (memo[R] - (L==0?0 : memo[L-1])) << endl;
  }


  return 0;
}
