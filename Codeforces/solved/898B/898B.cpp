#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,A,B; cin >> N >> A >> B;
  for (int i=0;i<=N/A;i++) {
    int remain = N-i*A;
    if (remain%B == 0) {
      cout << "YES\n";
      cout << i << " " << remain/B<< endl;
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
