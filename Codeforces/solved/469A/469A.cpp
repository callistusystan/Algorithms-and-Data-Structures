#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  vector<bool> canDo(N+1, false);

  int P; cin >> P;
  for (int i=0;i<P;i++) {
    int a; cin >> a;
    canDo[a] = true;
  }
  int Q; cin >> Q;
  for (int i=0;i<Q;i++) {
    int a; cin >> a;
    canDo[a] = true;
  }

  bool can = true;
  for (int i=1;i<=N;i++) {
    can &= canDo[i];
  }

  if (can) cout << "I become the guy.";
  else cout << "Oh, my keyboard!";
  cout << endl;

  return 0;
}
