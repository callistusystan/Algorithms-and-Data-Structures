#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N, K, S;
  cin >> N >> K >> S;
  if (S < K || S > K*(N-1)) cout << "NO\n";
  else {
    cout << "YES\n";
    int cur = 1;
    for (int i=0;i<K;i++) {
      int dist = min(N-1, S-(K-1-i));
      if (cur + dist > N) cur = cur-dist;
      else cur = cur + dist;
      cout << cur << " ";
      S -= dist;
    }
    cout << endl;
  }
  return 0;
}
