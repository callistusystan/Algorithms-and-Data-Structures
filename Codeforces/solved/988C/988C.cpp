#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  map<int, pii> seen;
  for (int i=1;i<=N;i++) {
    int K; cin >> K;
    vi A(K);
    int sum = 0;
    for (int j=0;j<K;j++) {
      cin >> A[j];
      sum += A[j];
    }
    for (int j=0;j<K;j++) {
      if (seen.count(sum-A[j])) {
        pii p = seen[sum-A[j]];
        cout << "YES\n";
        cout << p.first << " " << p.second << endl;;
        cout << i << " " << j+1 << endl;
        return 0;
      }
    }
    for (int j=0;j<K;j++) seen[sum-A[j]] = { i, j+1 };
  }
  cout << "NO\n";
  return 0;
}
