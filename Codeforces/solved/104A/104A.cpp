#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N <= 10 || N >= 22) cout << "0\n";
  else if (N == 20) {
    cout << "15\n";
  } else {
    cout << "4\n";
  }
  return 0;
}
