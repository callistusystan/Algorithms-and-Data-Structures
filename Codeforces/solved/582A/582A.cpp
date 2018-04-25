#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  priority_queue<int> pq;
  for (int i=0;i<N*N;i++) {
    int ai; cin >> ai;
    pq.push(ai);
  }
  while (N--) {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;
  return 0;
}
