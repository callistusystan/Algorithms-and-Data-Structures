#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string HOME; cin >> HOME;
  for (int i=0;i<N;i++) {
    string si; cin >> si;
  }
  if (N%2) cout << "contest";
  else cout << "home";
  cout << endl;
  return 0;
}
