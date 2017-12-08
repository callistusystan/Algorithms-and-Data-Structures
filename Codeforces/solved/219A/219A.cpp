#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int K; cin >> K;
  string S; cin >> S;
  int N = S.size();

  vi need(26);
  for (int i=0;i<N;i++) {
    need[S[i]-'a']++;
  }

  bool can = true;
  for (int i=0;i<26;i++) {
    if (need[i]%K) can = false;
    need[i] /= K;
  }

  if (can) {
    for (int k=0;k<K;k++) {
      for (int i=0;i<26;i++) {
        string ai(need[i], 'a'+i);
        cout << ai;
      }
    }
  } else cout << -1;
  cout << endl;

  return 0;
}
