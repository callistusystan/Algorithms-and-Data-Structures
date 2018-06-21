#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  S = ' ' + S;
  if (count(S.begin(), S.end(), 'R') == 0) {
    cout << S.find_last_of('L') << " " << S.find('L')-1 << endl;
  } else if (count(S.begin(), S.end(),'L') == 0) {
    cout << S.find('R') << " " << S.find_last_of('R')+1 << endl;
  } else {
    cout << S.find('R') << " " << S.find_last_of('R') << endl;
  }
  return 0;
}
