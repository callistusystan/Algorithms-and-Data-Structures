#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  ll A, B; cin >> A >> B;
  vi remA(N+5), remB(N+5);
  int rem = 0;
  for (int i=0;i<N;i++) {
    rem = (rem*10 + (S[i] - '0'))%A;
    remA[i] = rem;
  }
  rem = 0;
  ll p10 = 1;
  for (int i=N-1;i>=0;i--) {
    rem = (rem + (S[i]-'0')*p10)%B;
    remB[i] = rem;
    p10 = (p10*10)%B;
  }
  for (int i=0;i+1<N;i++) {
    if (remA[i] == 0 && remB[i+1] == 0 && S[i+1] != '0') {
      cout << "YES\n";
      cout << S.substr(0, i+1) << endl;
      cout << S.substr(i+1) << endl;
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
