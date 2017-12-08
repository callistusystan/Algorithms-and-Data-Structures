#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vector<bool> can(M);
  for (int i=0;i<N;i++) {
    int xi; cin >> xi;
    for (int j=0;j<xi;j++) {
      int b; cin >> b;
      can[b-1]=true;
    }
  }

  if (count(can.begin(), can.end(), true) == M) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
