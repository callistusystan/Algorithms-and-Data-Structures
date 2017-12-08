#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  int K; cin >> K;

  if (N%K) cout << "NO";
  else {
    int L = N/K;
    bool res = true;
    for (int i=0;i<K;i++) {
      for (int j=0;j<L;j++) {
        if (S[i*L+j] != S[(i+1)*L-1-j]) res = false;
      }
    }
    if (res) cout << "YES";
    else cout << "NO";
  }
  cout << endl;

  return 0;
}
