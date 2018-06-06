#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size(), last;
  for (int i=N-1;i>=0;i--) 
    if (S[i] == '#') { last = i; break; }
  int remain = count(S.begin(), S.end(), '(') - count(S.begin(), S.end(), ')');
  map<char, int> cnt;
  vi ans;
  for (int i=0;i<N;i++) {
    if (S[i] == '#') {
      if (i == last) ans.push_back(max(1, remain));
      else ans.push_back(1);
      remain -= ans.back();
      cnt[')'] += ans.back();
    } else cnt[S[i]]++;
    if (cnt[')'] > cnt['(']) {
      cout << "-1\n";
      return 0;
    }
  }
  for (int i : ans) cout << i << endl;
  return 0;
}