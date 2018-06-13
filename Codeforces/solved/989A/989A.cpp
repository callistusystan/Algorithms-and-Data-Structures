#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  for (int i=0;i+2<N;i++) {
    set<char> seen;
    for (int j=0;j<3;j++) if (isalpha(S[i+j])) seen.insert(S[i+j]);
    if ((int)seen.size() == 3) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}
