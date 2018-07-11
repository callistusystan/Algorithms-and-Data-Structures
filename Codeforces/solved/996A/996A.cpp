#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int denoms[] = {100,20,10,5,1};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int ans = 0;
  for (int i=0;i<5;i++) {
    int canTake = N/denoms[i];
    ans += canTake;
    N -= canTake*denoms[i];
  }
  cout << ans << endl;
  return 0;
}
