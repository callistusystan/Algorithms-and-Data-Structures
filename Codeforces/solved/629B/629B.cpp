#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi M(400), F(400);
  for (int i=0;i<N;i++) {
    char c; int a,b;
    cin >> c >> a >> b;
    if (c == 'M')
      for (int i=a;i<=b;i++) M[i]++;
    else
      for (int i=a;i<=b;i++) F[i]++;
  }
  int best = 0;
  for (int i=0;i<400;i++) {
    best = max(best, min(F[i], M[i]));
  }
  cout << 2*best << endl;
  return 0;
}
