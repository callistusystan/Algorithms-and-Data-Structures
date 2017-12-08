#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vector<bool> seen(26, false);

  int ans = 0;
  for (int i=0;i<N;i++) {
    if (!seen[S[i] - 'a']) {
      ans++;
      seen[S[i]-'a'] = true;
    }
  }

  if (ans%2) cout << "IGNORE HIM!";
  else cout << "CHAT WITH HER!";
  cout << endl;


  return 0;
}
