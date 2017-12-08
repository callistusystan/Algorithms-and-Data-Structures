#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  map<string, string> L;
  for (int i=0;i<M;i++) {
    string S1,S2; cin >> S1 >> S2;
    L[S1] = S2;
  }

  for (int i=0;i<N;i++) {
    string S; cin >> S;
    if (i) cout << " ";
    if (S.size() <= L[S].size()) cout << S;
    else cout << L[S];
  }
  cout << endl;

  return 0;
}
