#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  string S; cin >> S;
  int N = S.size();
  int K; cin >> K;

  vi W(26);
  for (int i=0;i<26;i++) cin >> W[i];
  int best = *max_element(W.begin(), W.end());

  ll score = 0;
  for (int i=1;i<=N;i++) score += W[S[i-1]-'a']*i;

  for (int i=N+1;i<=N+K;i++) {
    score += best*i;
  }

  cout << score << endl;

  return 0;
}
