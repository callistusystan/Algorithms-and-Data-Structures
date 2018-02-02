#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string A = "ACGT";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N%4) {
    cout << "===\n";
    return 0;
  }
  string S; cin >> S;
  vi cnt(4);
  for (char c : S) {
    if (c == '?') continue;
    cnt[A.find(c)]++;
    if (cnt[A.find(c)] > N/4) {
      cout << "===\n";
      return 0;
    }
  }
  int cur = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == '?') {
      while (cur < 4 && cnt[cur] >= N/4) cur++;
      S[i] = A[cur];
      cnt[cur]++;
    }
  }
  cout << S << endl;
  return 0;
}
