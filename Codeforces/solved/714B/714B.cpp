#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  set<int> A;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A.insert(ai);
  }

  if (A.size() >= 4) cout << "NO";
  else if (A.size() == 3) {
    int mx, mn;
    mx = *max_element(A.begin(), A.end());
    mn = *min_element(A.begin(), A.end());

    bool can = true;
    for (int i : A) {
      if (!(i == mn || i == mx || 2*i == mn+mx)) can = false;
    }
    if (can) cout << "YES";
    else cout << "NO";
  } else cout << "YES";
  cout << endl;

  return 0;
}
