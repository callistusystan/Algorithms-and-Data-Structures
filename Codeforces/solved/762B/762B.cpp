#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  map<string, int> need;
  cin >> need["USB"] >> need["PS/2"] >> need["BOTH"];

  int M; cin >> M;
  ll cnt = 0, cost = 0;
  vector<pair<int, string>> A(M);
  for (int i=0;i<M;i++) cin >> A[i].first >> A[i].second;
  sort(A.begin(), A.end());
  for (int i=0;i<M;i++) {
    int p = A[i].first; string t = A[i].second;
    if (need[t] > 0) {
      cnt++;
      cost += p;
      need[t]--;
    } else if (need["BOTH"] > 0) {
      cnt++;
      cost += p;
      need["BOTH"]--;
    }
  }
  cout << cnt << " " << cost << endl;
  return 0;
}
