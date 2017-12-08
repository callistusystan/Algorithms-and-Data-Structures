#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pair<int, string>> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first >> A[i].second;
  }

  bool can = true;
  int pos = 0;
  for (int i=0;i<N;i++) {
    if (pos == 0) {
      if (A[i].second != "South") can = false;
    } else if (pos == 20000) {
      if (A[i].second != "North") can = false;
    }

    if (A[i].second == "South") pos += A[i].first;
    if (A[i].second == "North") pos -= A[i].first;

    if (pos < 0 || pos > 20000) can = false;
  }

  if (can && pos == 0) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
