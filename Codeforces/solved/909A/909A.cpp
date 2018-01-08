#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A,B; cin >> A >> B;
  int N=A.size(), M=B.size();
  string best = A+B;
  for (int i=0;i<N;i++) {
    for (int j=0;j<M;j++) {
      string cur = A.substr(0,i+1) + B.substr(0,j+1);
      if (cur < best) best = cur;
    }
  }
  cout << best << endl;
  return 0;
}
