#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  priority_queue<int, vi, greater<int>> pq;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    pq.push(A[i]);
  }

  int ans = 1;
  for (int i=0;i<N;i++) {
    int smallest = pq.top(); pq.pop();
    if (smallest >= ans) ans++;
  }

  cout << ans << endl;

  return 0;
}
