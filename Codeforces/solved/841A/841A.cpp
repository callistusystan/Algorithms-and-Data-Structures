#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  string S; cin >> S;
  map<char, int> M;

  bool can = true;
  for (int i=0;i<N;i++) {
    M[S[i]]++;
    if (M[S[i]] > K) {
      can = false;
    }
  }

  if (can) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
