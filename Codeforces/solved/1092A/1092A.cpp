#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N, K; cin >> N >> K;
    for (int i=0;i<K;i++)
      for (int j=0;j<N/K;j++) cout << (char)('a'+i);
    for (int i=0;i<N%K;i++) cout << (char)('a'+i);
    cout << endl;
  }
  return 0;
}
