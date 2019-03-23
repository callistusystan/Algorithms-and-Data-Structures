#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int DAY = 1;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M, D; cin >> N >> M >> D;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  vi B = A;
  sort(B.begin(), B.end());
  map<int, int> day;
  set<pii> breaks;
  for (int i=0;i<N;i++) {
    if (breaks.empty()) {
      breaks.insert({ B[i], DAY });
      day[B[i]] = DAY++;
    } else {
      auto it = breaks.upper_bound({ B[i]-D-1, 2e9 });
      if (it == breaks.begin()) {
        breaks.insert({ B[i], DAY });
        day[B[i]] = DAY++;
      } else {
        it--;
        int d = it->second;
        breaks.erase(it);
        breaks.insert({ B[i], d });
        day[B[i]] = d;
      }
    }
  }    
  cout << breaks.size() << endl;
  for (int i=0;i<N;i++) {
    cout << day[A[i]] << " ";
  }
  cout << endl;
  return 0;
}
