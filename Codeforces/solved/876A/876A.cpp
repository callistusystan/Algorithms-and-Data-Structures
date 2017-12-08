#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, A, B, C; cin >> N >> A >> B >> C;

  int shortest = min(A, min(B, C));
  if (shortest == A || shortest == B) cout << shortest*(N-1);
  else cout << min(A, B) + C*(N-2);
  cout << endl;

  return 0;
}
