#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  while (N--) {
    int ai; cin >> ai;
    bool can = false;
    for (int a=0;a<=100;a++) {
      for (int b=0;b<=100;b++) {
        if (a*3 + b*7 == ai) can = true;
      }
    }
    if (can) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
