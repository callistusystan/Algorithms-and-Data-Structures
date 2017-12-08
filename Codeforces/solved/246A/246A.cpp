#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N <= 2) cout << "-1\n";
  else {
    for (int i=N;i>= 1;i--) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}
