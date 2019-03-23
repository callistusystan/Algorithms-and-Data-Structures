#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  int cur = 0;
  for (int i=0;i<N;i++) {
    int x; cin >> x;
    cout << (cur+x)/M << " ";
    cur = (cur+x)%M;
  }
  cout << endl;
  return 0;
}
