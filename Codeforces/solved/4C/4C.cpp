#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;


int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<string, int> M;
  for (int i=0;i<N;i++) {
    string S; cin >> S;
    if (M.count(S)) {
      cout << S << M[S]++ << endl;
    } else {
      cout << "OK" << endl;
      M[S]++;
    }
  }

  return 0;
}
