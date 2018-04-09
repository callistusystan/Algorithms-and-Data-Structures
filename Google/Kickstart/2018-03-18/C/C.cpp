#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool same(vi &a, vi &b) {
  for (int i=0;i<26;i++) {
    if (a[i] != b[i]) return false;
  }
  return true;
}

int solve() {
  // read input
  int L; cin >> L;
  vector<string> dict(L);
  for (int i=0;i<L;i++) cin >> dict[i];
  string S = "--";
  cin >> S[0] >> S[1];
  ll N,A,B,C,D; cin >> N >> A >> B >> C >> D;
  ll first = S[0], second = S[1];
  for (int i=2;i<N;i++) {
    ll cur = (A*second + B*first + C)%D;
    S += 'a' + (cur%26);
    first = second;
    second = cur;
  }

  // get counts of each word in dictionary
  vector<vi> counts(L, vi(26));
  for (int i=0;i<L;i++) {
    for (char c : dict[i]) {
      counts[i][c-'a']++;
    }
  }

  // preprocess a lookup from length to id to word index
  // candidates[len][c1][c2] = [0,3,5]
  vector<vector<vector<vi>>> candidates(1e5+5, vector<vector<vi>>(26, vector<vi>(26)));
  set<int> lengthsSet;
  for (int i=0;i<L;i++) {
    candidates[dict[i].size()][dict[i][0]-'a'][dict[i].back()-'a'].push_back(i);
    lengthsSet.insert(dict[i].size());
  }

  // get seen lengths in increasing order
  vi lengths;
  for (int l : lengthsSet) {
    lengths.push_back(l);
  }

  // get prefixCounts of string S
  vector<vi> prefixCounts(N, vi(26));
  for (int i=0;i<N;i++) {
    if (i) {
      for (int j=0;j<26;j++)
        prefixCounts[i][j] += prefixCounts[i-1][j];
    }
    prefixCounts[i][S[i]-'a']++;
  }

  cerr << "N is " << N << " and there are " << lengths.size() << " distinct lengths" << endl;
  cerr << "Time will take " << (N*lengths.size())/1.0/1e8 << "-ish" << endl;

  // loop through each i from 0..len(S)-1
  //  loop through each length
  //    get counts for S[i..i+length-1]
  //    loop through candidates with same id
  //      if counts matches, set in
  vi in(L);
  for (int i=0;i<N;i++) {
    for (int l : lengths) {
      if (i+l-1 >= N) break;
      vi cnt = prefixCounts[i+l-1];
      if (i) {
        for (int j=0;j<26;j++) cnt[j] -= prefixCounts[i-1][j];
      }

      string id = to_string(S[i]) + S[i+l-1];
      for (int j : candidates[l][S[i]-'a'][S[i+l-1]-'a']) {
        if (in[j]) continue;
        if (same(cnt, counts[j])) {
          in[j] = 1;
        }
      }
    }
  }

  return count(in.begin(), in.end(), 1);
}

int main() {
  // ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  for (int t=1;t<=T;t++) {
    int ans = solve();
    cout << "Case #" << t << ": " << ans << endl;;
  }
  return 0;
}
