#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  set<string> A;
  for (int i=0;i<N+1;i++) {
    for (int j=0;j<26;j++) {
      string si;
      if (i-1 >= 0) si += S.substr(0, i);
      si += (char)(j+'a');
      if (i < N) si += S.substr(i);
      A.insert(si);
    }
  }

  cout << A.size() << endl;

  return 0;
}
