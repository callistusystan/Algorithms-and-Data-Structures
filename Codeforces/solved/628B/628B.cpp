#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  
  string S; cin >> S;
  int N = S.size();
  ll ans = 0;
  for (int i=0;i<N;i++)
    if ((S[i]-'0')%4 == 0) ans++;
  for (int i=0;i+1<N;i++)
    if (stoi(S.substr(i, 2))%4 == 0) ans += 1+i;
  cout << ans << endl;
  return 0;
}