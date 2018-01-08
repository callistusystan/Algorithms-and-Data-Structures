#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  map<char, string> A;
  cin >> A['h'] >> A['a'];
  int N; cin >> N;
  vector<vi> cnt(128, vi(105)), isOut(128, vi(105));
  for (int i=0;i<N;i++) {
    int a,c; char b,d;
    cin >> a >> b >> c >> d;
    if (d == 'y') cnt[b][c]++;
    else cnt[b][c] = 2;
    if (cnt[b][c] >= 2 && !isOut[b][c]) {
      cout << A[b] << " " << c << " " << a << endl;
      isOut[b][c] = 1;
    }
  }
  return 0;
}
