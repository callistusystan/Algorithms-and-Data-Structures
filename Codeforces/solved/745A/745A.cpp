#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  set<string> A;
  for (int i=0;i<N;i++) {
    string si = S.substr(N-i, i);
    si += S.substr(0, N-i);
    A.insert(si);
  }

  cout << A.size() << endl;

  return 0;
}
