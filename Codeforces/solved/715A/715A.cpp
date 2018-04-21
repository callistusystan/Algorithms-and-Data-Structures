#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (ll i=1;i<=N;i++) {
    cout << i*(i+1)*(i+1) - (i == 1 ? 2 : i-1) << endl;
  }
  return 0;
}
