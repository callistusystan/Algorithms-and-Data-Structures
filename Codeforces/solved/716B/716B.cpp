#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  bool can = false;
  for (int i=0;i+25<N;i++) {
    int ni = 0;
    set<char> si;
    for (int j=0;j<26;j++) {
      if (S[i+j] == '?') ni++;
      else si.insert(S[i+j]);
    }

    if (si.size() + ni == 26) {
      for (int j=0;j<26;j++) {
        if (S[i+j] != '?') continue;
        for (int k=0;k<26;k++) {
          if (!si.count('A'+k)) {
            S[i+j] = 'A'+k;
            si.insert('A'+k);
            break;
          }
        }
      }
      can = true;
      break;
    }
  }

  if (can) {
    for (int i=0;i<N;i++) if (S[i] == '?') S[i] = 'A';
    cout << S;
  } else cout << -1;
  cout << endl;

  return 0;
}
