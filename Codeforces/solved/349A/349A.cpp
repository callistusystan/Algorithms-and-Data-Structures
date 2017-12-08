#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi nums(N);
  for (int i=0;i<N;i++) cin >> nums[i];
  int A,B,C; A = B = C = 0;
  bool can = true;
  for (int i=0;i<N;i++) {
    int ai = nums[i];

    if (ai == 25) A++;
    else if (ai == 50) B++;
    else C++;

    if (ai == 50) {
      if (A) A--;
      else {
        can = false;
        break;
      }
    }

    if (ai == 100) {
      if (B > 0 && A > 0) {
        B--;
        A--;
      } else if (A >= 3) {
        A -= 3;
      } else {
        can = false;
        break;
      }
    }
  }

  if (can) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
