#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  map<string, int> M;
  for (int i=0;i<10;i++) {
    string si; cin >> si;
    M[si] = i;
  }
  for (int i=0;i<8;i++) {
    cout << M[S.substr(i*10,10)];
  }
  cout << endl;
  return 0;
}
