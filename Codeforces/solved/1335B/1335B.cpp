#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N, A, B; cin >> N >> A >> B;
    string ans;
    for (int i=0;i<N;i++) {
      char c = 'a' + i%B;
      cout << c;
    }
    cout << endl;
  }
  return 0;
}
