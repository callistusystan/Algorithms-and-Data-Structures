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
  if (A.size() == 1) cout << "NO\n";
  else cout << *(++A.begin()) << endl;
  return 0;
}
