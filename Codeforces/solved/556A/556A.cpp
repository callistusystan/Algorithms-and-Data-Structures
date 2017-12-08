#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int N; cin >> N;
  string S; cin >> S;

  int n1,n0;
  n1 = count(S.begin(), S.end(), '0');
  n0 = N- n1;

  cout << N - min(n1, n0)*2 << endl;

  return 0;
}
