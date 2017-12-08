#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  bool lucky = true;

  string S; cin >> S;
  for (char c: S) {
    if (c != '4' && c != '7') lucky = false;
  }

  int s1, s2;
  s1 = s2 = 0;
  for (int i=0;i<N/2;i++) {
    s1 += S[i]-'0';
  }
  for (int i=N/2;i<N;i++) {
    s2 += S[i]-'0';
  }

  if (lucky && s1 == s2) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
