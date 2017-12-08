#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  set<string> S;
  while (N--) {
    string si; cin >> si;
    if (S.count(si)) cout << "YES\n";
    else {
      cout << "NO\n";
      S.insert(si);
    }
  }
  return 0;
}
