#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  for (int i=0;i<N;i++) cout << (char)('a'+i%K);
  cout << endl;
  return 0;
}
