#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int n0 = count(S.begin(), S.end(), '0');
  int n1 = N-n0;
  if (n1 == 0) cout << "0\n";
  else {
    cout << 1;
    while (n0--) cout << 0;
    cout << endl;
  }
  return 0;
}
