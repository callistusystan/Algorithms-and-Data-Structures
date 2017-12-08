#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int A,B;
  A=B=0;
  for (int i=0;i<3;i++) {
    int ai; cin >> ai;
    A += ai;
  }
  for (int i=0;i<3;i++) {
    int bi; cin >> bi;
    B+=bi;
  }
  int N;cin >> N;

  int Aneed, Bneed;
  Aneed = (A+4)/5;
  Bneed = (B+9)/10;
  if (Aneed + Bneed <= N) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
