#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, P; cin >> N >> P;
  string S; cin >> S;
  bool can = false;
  for (int i=0;i+P<N;i++) {
    if (S[i] == '.') S[i] = S[i+P] == '1' ? '0' : '1';
    if (S[i+P] == '.') S[i+P] = S[i] == '1' ? '0' : '1';
    if (S[i] != S[i+P]) can = true;
  }
  for (int i=0;i<N;i++) if (S[i] == '.') S[i] = '0';
  if (can) cout << S << endl;
  else cout << "No\n";
  return 0;
}
