#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first;
    A[i].second = i+1;
  }
  sort(A.begin(), A.end());
  priority_queue<pii> pq;
  string S; cin >> S;
  int cur = 0;
  for (char c : S) {
    if (c == '0') {
      cout << A[cur].second << " ";
      pq.push(A[cur]);
      cur++;
    } else {
      cout << pq.top().second << " ";
      pq.pop();
    }
  }
  cout << endl;
  return 0;
}
