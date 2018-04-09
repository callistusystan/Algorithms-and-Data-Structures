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
    if (S.substr(i, 2) == "RU" || S.substr(i, 2) == "UR") {
      S[i] = 'D'; S[i+1] = 'D';
    }
  }
  cout << count(S.begin(), S.end(), 'R') + count(S.begin(), S.end(), 'U') + count(S.begin(), S.end(), 'D')/2 << endl;
  return 0;
}
