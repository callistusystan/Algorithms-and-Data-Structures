#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string index = "DR";
  queue<int> q[2];
  string S; cin >> S;
  for (int i=0;i<N;i++) q[index.find(S[i])].push(i);
  while (q[0].size() && q[1].size()) {
    if (q[0].front() < q[1].front()) {
      q[0].push(q[0].front()+N); q[0].pop();
      q[1].pop();
    } else {
      q[1].push(q[1].front()+N); q[1].pop();
      q[0].pop();
    }
  }
  if (q[0].empty()) cout << "R\n";
  else cout << "D\n";
  return 0;
}
