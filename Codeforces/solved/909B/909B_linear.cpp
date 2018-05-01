#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int mx = 0;
  for (int i=0;i+1<=N;i++) mx = max(mx, (i+1)*(N - (i+1) + 1));
  cout << mx << endl;
  return 0;
}
