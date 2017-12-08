#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, int> A;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A[ai]++;
  }

  if (A.size() != 2) {
    cout << "NO";
  } else {
    bool can = true;
    for (auto p : A) {
      if (p.second != N/2) can = false;
    }

    if (can) {
      cout << "YES" << endl;
      bool first = 1;
      for (auto p : A) {
        if (!first) cout << " ";
        cout << p.first;
        first = 0;
      }
    } else {
      cout << "NO";
    }
  }
  cout << endl;

  return 0;
}
