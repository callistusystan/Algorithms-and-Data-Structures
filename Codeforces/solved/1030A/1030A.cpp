#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  while (N--) {
    int x; cin >> x;
    if (x == 1) {
      cout << "HARD\n";
      return 0;
    }
  }
  cout << "EASY\n";
  return 0;
}
