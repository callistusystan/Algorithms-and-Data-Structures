#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vi lps(N), cnt(N);
  int j = 0;
  for (int i=1;i<N;i++) {
    while (j && S[i] != S[j]) j = lps[j-1];
    if (S[i] == S[j]) j++;
    lps[i] = j;
  }
  for (int i=0;i<N-1;i++) cnt[lps[i]]++;
  j = N-1;
  while (lps[j] > 0) {
    if (cnt[lps[j]]) {
      cout << S.substr(0, lps[j]) << endl;
      return 0;
    }
    j = lps[j]-1;
  }
  cout << "Just a legend\n";
  return 0;
}
