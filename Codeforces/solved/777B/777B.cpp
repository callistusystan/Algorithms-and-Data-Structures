#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S, M; cin >> S >> M;
  sort(S.begin(), S.end());
  vi freq1(10), freq2(10);
  for (char c : M) {
    freq1[c-'0']++;
    freq2[c-'0']++;
  }
  int ans1, ans2;
  ans1 = ans2 = 0;
  for (char c : S) {
    bool can = false;
    for (int j=c-'0';j<10;j++) {
      if (freq1[j]) {
        freq1[j]--;
        can = true;
        break;
      }
    }
    if (!can) ans1++;
  }
  for (char c : S) {
    for (int j=c-'0'+1;j<10;j++) {
      if (freq2[j]) {
        freq2[j]--;
        ans2++;
        break;
      }
    }
  }
  cout << ans1 << endl << ans2 << endl;
  return 0;
}
