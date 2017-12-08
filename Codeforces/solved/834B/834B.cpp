#include <bits/stdc++.h>
using namespace std;

#define SZ(x) (int)x.size()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  string S; cin >> S;
  vi last(26);
  for (int i=0;i<N;i++) {
    last[S[i]-'A'] = i;
  }
  set<int> guarded;
  for (int i=0;i<N;i++) {
    int c = S[i]-'A';
    if (!guarded.count(c)) {
      guarded.insert(c);
    }
    if (SZ(guarded) > K) {
      cout << "YES\n";
      return 0;
    }
    if (i == last[c]) guarded.erase(c);
  }
  cout << "NO\n";
  return 0;
}
