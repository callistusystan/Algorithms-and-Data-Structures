#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> L(N);

  for (int i=0;i<N;i++) {
    cin >> L[i].first >> L[i].second;
  }

  sort(L.begin(), L.end());

  int MIN = L[N-1].second;
  bool can = false;
  for (int i=N-2;i>=0;i--) {
    if (L[i].second > MIN) {
      can = true;
    }
    MIN = min(MIN, L[i].second);
  }

  if (can) cout << "Happy ";
  else cout << "Poor ";
  cout << "Alex" << endl;

  return 0;
}
