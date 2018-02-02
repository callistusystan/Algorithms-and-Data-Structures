#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool solve() {
  int N,K; cin >> N >> K;
  if (N < K || (N > 1 && K == 1)) return 0;
  string S(N,'a');
  for (int i=1;i<N;i+=2) S[i] = 'b';
  for (int i=0;i<K-2;i++) {
    S[N-1-i] = 'a'+K-1-i;
  }
  cout << S << endl;
  return 1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  if (!solve()) cout << "-1\n";
  return 0;
}
