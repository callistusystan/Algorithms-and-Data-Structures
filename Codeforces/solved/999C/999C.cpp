#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  string S; cin >> S;
  vector<queue<int>> pos(26);
  for (int i=0;i<N;i++) pos[S[i]-'a'].push(i);
  vi in(N, 1);
  for (int i=0;i<K;i++) {
    for (int j=0;j<26;j++) {
      if (pos[j].size()) {
        in[pos[j].front()] = 0;
        pos[j].pop();
        break;
      }
    } 
  }
  string T;
  for (int i=0;i<N;i++) if (in[i]) T += S[i];
  cout << T << endl;
  return 0;
}
