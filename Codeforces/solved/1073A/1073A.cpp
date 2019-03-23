#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  for (int i=0;i+1<N;i++) {
    if (S[i] != S[i+1]) {
      cout << "YES\n";
      cout << S.substr(i, 2) << endl;
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
