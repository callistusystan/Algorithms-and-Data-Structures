#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  ll sum = 0;
  bool hasOdd = false;
  for (int i=0;i<N;i++) {
    ll ai; cin >> ai;
    if (ai%2) hasOdd = true;
    sum += ai;
  }

  if (sum%2) cout << "First";
  else if (hasOdd) cout << "First";
  else cout << "Second";
  cout << endl;

  return 0;
}
