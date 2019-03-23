#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool f(pii &a, pii &b) {
  if (a.first != b.first) return a.first > b.first;
  return a.second < b.second;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> scores;
  for (int i=0;i<N;i++) {
    int sum = 0;
    for (int j=0;j<4;j++) {
      int x; cin >> x;
      sum += x;
    }
    scores.push_back({ sum, i+1 });
  }
  sort(scores.begin(), scores.end(), f);
  for (int i=0;i<N;i++) {
    if (scores[i].second == 1) {
      cout << i+1 << endl;
      return 0;
    }
  }
  return 0;
}
