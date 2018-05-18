#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; cin >> N;
  N++;
  if (N == 1) cout << "0\n";
  else if (N%2) cout << N << endl;
  else cout << N/2 << endl;
  return 0;
}
