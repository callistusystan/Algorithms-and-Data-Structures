#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool inBetween(int a, int l, int r) {
  return l < a && a < r;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vector<pii> pairs;
  for (int i=0;i+1<N;i++) {
    int left = min(A[i], A[i+1]), right = max(A[i], A[i+1]);
    pairs.push_back({ left, right });
  }
  for (int i=0;i<N-1;i++) {
    for (int j=0;j<N-1;j++) {
      if (i == j) continue;
      if (pairs[i].first < pairs[j].first && inBetween(pairs[i].second, pairs[j].first, pairs[j].second)) {
        cout << "yes\n";
        return 0;
      }
    }
  }
  cout << "no\n";
  return 0;
}
