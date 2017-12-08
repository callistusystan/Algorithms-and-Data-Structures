#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll A,B,S; cin >> A >> B >> S;

  ll MIN = abs(A) + abs(B);

  if (S < MIN || ((S-MIN)%2 == 1)) cout << "No";
  else cout << "Yes";
  cout << endl;

  return 0;
}
