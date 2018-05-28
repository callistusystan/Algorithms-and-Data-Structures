#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  if (N == 1) {
    cout << "0 0\n";
    return 0;
  }
  set<pii> A;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    A.insert({ ai, i+1 });
  }
  int S = (*A.rbegin()).first - (*A.begin()).first, M = 0;
  vector<pii> moves;
  for (int i=1;i<=K;i++) {
    pii biggest = *A.rbegin(), smallest = *A.begin();
    A.erase(--A.end()); A.erase(A.begin());
    biggest.first--; smallest.first++;
    A.insert(biggest); A.insert(smallest);
    moves.push_back({ biggest.second, smallest.second });
    int newS = (*A.rbegin()).first - (*A.begin()).first;
    if (newS < S) {
      S = newS;
      M = i;            
    }
  }
  cout << S << " " << M << endl;
  for (int i=0;i<M;i++) {
    cout << moves[i].first << " " << moves[i].second << endl;
  }
  return 0;
}
