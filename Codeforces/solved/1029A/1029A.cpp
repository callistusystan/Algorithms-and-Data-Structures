#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  string T; cin >> T;
  string longestSuffixPrefix;
  for (int i=1;i<N;i++) {
    if (T.substr(i) == T.substr(0, N-i)) {
      longestSuffixPrefix = T.substr(0, N-i);
      break;
    }
  }
  cout << T;
  for (int i=1;i<K;i++) {
    cout << T.substr(longestSuffixPrefix.size());
  }
  cout << endl;
  return 0;
}
