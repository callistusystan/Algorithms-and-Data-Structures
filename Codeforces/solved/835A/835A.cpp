#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int S, V1, V2, T1, T2; cin >> S >> V1 >> V2 >> T1 >> T2;

  int first = S*V1 + 2*T1;
  int second = S*V2 + 2*T2;

  if (first == second) cout << "Friendship";
  else if (first < second) cout << "First";
  else cout << "Second";
  cout << endl;

  return 0;
}
