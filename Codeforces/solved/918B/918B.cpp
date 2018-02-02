#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  map<string, string> A;
  while (N--) {
    string a,b; cin >> a >> b;
    A[b] = a;
  }
  while (M--) {
    string a,b; cin >> a >> b;
    cout << a << " " << b << " #" << A[b.substr(0, b.size()-1)] << '\n';
  }
  return 0;
}
