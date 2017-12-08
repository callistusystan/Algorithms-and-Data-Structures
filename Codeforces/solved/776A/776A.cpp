#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A,B; cin >> A >> B;
  cout << A << " " << B << endl;
  int N; cin >> N;
  for (int i=0;i<N;i++) {
    string ai,bi; cin >> ai >> bi;
    if (A == ai) A = bi;
    else B = bi;
    cout << A << " " << B << endl;
  }

  return 0;
}
