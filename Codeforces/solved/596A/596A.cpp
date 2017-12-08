#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  set<int> X,Y;
  for (int i=0;i<N;i++) {
    int xi, yi; cin >> xi >> yi;
    X.insert(xi);
    Y.insert(yi);
  }
  if (X.size() == 2 && Y.size() == 2) {
    int l,w;
    l = *X.rbegin() - *X.begin();
    w = *Y.rbegin() - *Y.begin();
    cout << l*w;
  } else cout << -1;
  cout << endl;
  return 0;
}
