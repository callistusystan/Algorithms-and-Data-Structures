#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,T; cin >> N >> T;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    int canRead = 86400 - ai;
    T = max(T-canRead, 0);
    if (T <= 0){
      cout << i+1 << endl;
      return 0;
    }
  }
  return 0;
}
