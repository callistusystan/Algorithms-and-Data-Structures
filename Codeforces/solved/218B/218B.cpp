#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  priority_queue<int> max_heap;
  priority_queue<int, vi, greater<int>> min_heap;
  for (int i=0;i<M;i++) {
    int ai; cin >> ai;
    max_heap.push(ai);
    min_heap.push(ai);
  }
  int mx, mn; mx = mn = 0;
  for (int i=0;i<N;i++) {
    if (max_heap.empty()) break;
    // handle max
    int top = max_heap.top(); max_heap.pop();
    mx += top;
    if (top-1) max_heap.push(top-1);

    // handle min
    top = min_heap.top(); min_heap.pop();
    mn += top;
    if (top-1) min_heap.push(top-1);
  }
  cout << mx << " " << mn << endl;
  return 0;
}
