#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,M; cin >> N >> M;
  if (N >= 27) cout << M << endl;
  else cout << M%(1<<N) << endl;
  return 0;
}
