#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  vi A(26);
  for (int i=0;i<N;i++) A[S[i]-'a']++;

  int nOdd = 0;
  for (int i=0;i<26;i++) {
    if (A[i]%2) nOdd++;
  }

  if (nOdd <= 1) cout << "First";
  else {
    if (nOdd%2) cout << "First";
    else cout << "Second";
  }
  cout << endl;

  return 0;
}
