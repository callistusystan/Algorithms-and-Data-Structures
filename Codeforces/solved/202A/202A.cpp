#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  char mx = *max_element(S.begin(), S.end());
  int cnt = count(S.begin(), S.end(), mx);
  string T(cnt, mx);
  cout << T << endl;
  return 0;
}
