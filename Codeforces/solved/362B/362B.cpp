#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi dirty(M);
  for (int i=0;i<M;i++) {
    cin >> dirty[i];
    if (dirty[i] == 1 || dirty[i] == N) {
      cout << "NO\n";
      return 0;
    }
  }
  sort(dirty.begin(), dirty.end());
  for (int i=0;i<M-2;i++) {
    if (dirty[i+1] == dirty[i]+1 && dirty[i+2] == dirty[i]+2) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}
