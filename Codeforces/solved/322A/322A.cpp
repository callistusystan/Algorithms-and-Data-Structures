#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  cout << 1 + N-1 + M-1 << endl;
  cout << "1 1\n";
  for (int i=2;i<=M;i++) cout << "1 " << i << "\n";
  for (int i=2;i<=N;i++) cout << i << " 1\n";
  return 0;
}
