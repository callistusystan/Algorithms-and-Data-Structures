#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  for (int i=1;i<=N;i++) {
    if (N%i == 0) reverse(S.begin(), S.begin()+i);
  }
  cout << S << endl;
  return 0;
}
