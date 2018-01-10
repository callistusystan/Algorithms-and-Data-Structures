#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K,A,B; cin >> K >> A >> B;
  if ((A<K && B%K) || (B<K && A%K)) cout << "-1\n";
  else cout << A/K + B/K << endl;
  return 0;
}
