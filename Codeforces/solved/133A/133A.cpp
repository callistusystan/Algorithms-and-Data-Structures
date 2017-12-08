#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;

  bool output = false;
  if (find(S.begin(), S.end(), 'H') != S.end()) output = true;
  if (find(S.begin(), S.end(), 'Q') != S.end()) output = true;
  if (find(S.begin(), S.end(), '9') != S.end()) output = true;

  if (output) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
