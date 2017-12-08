#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int N,A,B; cin >> N >> A >> B;
  A--; B--;
  string S; cin >> S;

  if (S[A] == S[B]) cout << 0;
  else cout << 1;
  cout << endl;

  return 0;
}
