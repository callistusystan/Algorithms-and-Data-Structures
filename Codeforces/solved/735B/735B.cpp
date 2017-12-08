#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, N1, N2; cin >> N >> N1 >> N2;
  priority_queue<int> pq;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    pq.push(ai);
  }

  double sum1, sum2;
  sum1 = sum2 = 0;
  for (int i=0;i<min(N1,N2);i++) {
    sum1 += pq.top(); pq.pop();
  }
  for (int i=0;i<max(N1,N2);i++) {
    sum2 += pq.top(); pq.pop();
  }
  cout << fixed << setprecision(8);
  cout << sum1/min(N1, N2) + sum2/max(N1,N2) << endl;

  return 0;
}
