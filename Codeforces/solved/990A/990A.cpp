#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N,M,A,B; cin >> N >> M >> A >> B;
  if (N%M == 0) cout << "0\n";
  else cout << min((((N+M-1)/M*M)-N)*A, (N-N/M*M)*B) << endl;
  return 0;
}
