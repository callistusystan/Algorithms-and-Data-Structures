#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  vector<vi> piles;
  for (int i=0;i<N;i++) {
    bool put = false;
    for (vi &pile : piles) {
      if (A[i] >= (int)pile.size()) {
        pile.push_back(A[i]);
        put = true;
        break;
      }
    }
    if (!put) piles.push_back({A[i]});
  }
  cout << piles.size() << endl;
  return 0;
}
