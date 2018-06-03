#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int nA = count(S.begin(), S.end(), 'A'), nF = count(S.begin(), S.end(), 'F');
  int nI = N - nA - nF;
  if (nI == 0) cout << nA << endl;
  else if (nI == 1) cout << "1\n";
  else cout << "0\n";
  return 0;
}
