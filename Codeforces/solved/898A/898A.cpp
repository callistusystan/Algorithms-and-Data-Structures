#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N%10 <= 5) cout << (N/10)*10 << endl;
  else cout << ((N+9)/10)*10 << endl;
  return 0;
}
