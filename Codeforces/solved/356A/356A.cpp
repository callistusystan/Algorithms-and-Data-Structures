#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi ans(N+1);
  set<int> in;
  for (int i=1;i<=N;i++) in.insert(i);
  for (int i=0;i<M;i++) {
    int li, ri, xi; cin >> li >> ri >> xi;
    vi remove;
    for (auto it=in.lower_bound(li);it!=in.upper_bound(ri);it++) {
      if (*it == xi) continue;
      ans[*it] = xi;
      remove.push_back(*it);
    }
    for (int num : remove) in.erase(num); 
  }
  for (int i=1;i<=N;i++) cout << ans[i] << " ";  
  cout << endl;
  return 0;
}
