#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string f(string S, string T) {
  string U(max(S.size(), T.size())+5, '0');
  reverse(S.begin(), S.end());
  reverse(T.begin(), T.end());
  while (S.size() < T.size()) S += '0';
  while (T.size() < S.size()) T += '0';
  for (int i=0;i<max(S.size(), T.size());i++) {
    int a=S[i]-'0', b=T[i]-'0', c=U[i]-'0';
    U[i] = '0'+(a+b+c)%10;
    U[i+1] = '0'+(a+b+c)/10;
  }
  while (U.back() == '0') U.pop_back();
  reverse(U.begin(), U.end());
  return U;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  N--;
  while (N--) {
    string T; cin >> T;
    S = f(S, T);
  }
  cout << S.substr(0,10) << endl;
  return 0;
}
