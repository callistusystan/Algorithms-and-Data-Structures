#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N%3 == 2) cout << N-4 << " 2 2\n";
  else cout << N-2 << " 1 1\n";
  return 0;
}
