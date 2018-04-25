#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int i = 1;
  while (i*(i+1)/2 < N) i++;
  if (i*(i+1)/2 == N) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
