#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

string F[] = {"","","2","3","322","5","53","7","7222","7332"};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;

  string res;
  for (int i=0;i<N;i++) {
    if (S[i] != '1' && S[i] != '0') {
      res += F[S[i]-'0'];
    }
  }

  sort(res.begin(), res.end());
  reverse(res.begin(), res.end());

  cout << res << endl;

  return 0;
}
