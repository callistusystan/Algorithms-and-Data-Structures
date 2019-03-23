#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi cnt(string &s) {
  vi res(26);
  for (char c : s) res[c-'a']++;
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; 
  string S, T;
  cin >> N >> S >> T;
  vi cntS = cnt(S), cntT = cnt(T);  
  if (cntS != cntT) cout << "-1\n";
  else {
    vi ans;
    for (int i=0;i<N;i++) {
      int j = i;
      while (S[j] != T[i]) j++;
      while (j > i) {
        ans.push_back(j-1);
        swap(S[j], S[j-1]);
        j--;
      }
    }
    cout << ans.size() << endl;
    for (int x : ans) cout << x+1 << " ";
    cout << endl;
  }
  return 0;
}
