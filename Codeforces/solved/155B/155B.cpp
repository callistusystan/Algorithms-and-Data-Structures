#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  priority_queue<pii> pq;
  for (int i=0;i<N;i++) {
    int ai, bi; cin >> ai >> bi;
    pq.push({ bi, ai });
  }
  int moves = 1, score = 0;
  while (!pq.empty() && pq.top().first > 0) {
    score += pq.top().second;
    moves += pq.top().first-1;
    pq.pop();
  }
  priority_queue<int> points;
  while (!pq.empty()) {
    points.push(pq.top().second);
    pq.pop();
  }
  while (moves > 0 && !points.empty()) {
    score += points.top();
    points.pop();
    moves--;
  }
  cout << score << endl;
  return 0;
}
