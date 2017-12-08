#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  sort(S.begin(), S.begin()+N);
  sort(S.begin()+N, S.end());

  bool less, more; less = more = true;
  for (int i=0;i<N;i++) {
    less &= (S[i] < S[i+N]);
    more &= (S[i] > S[i+N]);
  }

  if (less || more) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
