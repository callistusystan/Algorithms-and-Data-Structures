#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  string T;
  for (int i=0;i<N;i++) {
    T += S[i];
    int sz = T.size();
    while (sz >= 2 && T[sz-1] == T[sz-2]) { 
      T.pop_back(); T.pop_back(); 
      sz = T.size();
    }
  } 
  if (T.size()) cout << "No\n";
  else cout << "Yes\n";
  return 0;
}
