#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string A, B; cin >> A >> B;
  if (A.size() != B.size()) cout << "NO\n";
  else {
    int N = A.size();
    vi mis;
    for (int i=0;i<N;i++)
      if (A[i] != B[i]) mis.push_back(i);
    if (mis.size() == 2 && A[mis[0]] == B[mis[1]] && A[mis[1]] == B[mis[0]]) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
