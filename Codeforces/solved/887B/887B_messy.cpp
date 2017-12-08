#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<vi> A(3, vi(6));
  for (int i=0;i<N;i++)
    for (int j=0;j<6;j++){
      cin >> A[i][j];
    }

  int ans = 1;
  while (1) {
    vi need(10);
    int num = ans;
    while (num > 0) {
      need[num%10]++;
      num/=10;
    }

    if (N == 1) {
      bool can = false;
      if (ans < 10) {
        for (int i=0;i<6;i++) {
          if (A[0][i] == ans) can = true;
        }
      }

      if (!can) break;
    } else if (N == 2) {
      vi have(10);
      bool can = false;
      for (int i=0;i<6;i++) {
        have[A[0][i]]++;
        for (int j=0;j<6;j++) {
          have[A[1][j]]++;
          bool res = true;
          for (int k=0;k<10;k++) {
            if (have[k] < need[k]) res = false;
          }
          if (res) can = true;
          have[A[1][j]]--;
        }
        have[A[0][i]]--;
      }

      if (!can) break;
    } else if (N == 3) {
      vi have(10);
      bool can = false;
      for (int i=0;i<6;i++) {
        have[A[0][i]]++;
        for (int j=0;j<6;j++) {
          have[A[1][j]]++;
          for (int l=0;l<6;l++) {
            have[A[2][l]]++;
            bool res = true;
            for (int k=0;k<10;k++) {
              if (have[k] < need[k]) res = false;
            }
            if (res) can = true;
            have[A[2][l]]--;
          }
          have[A[1][j]]--;
        }
        have[A[0][i]]--;
      }

      if (!can) break;
    }
    ans++;
  }

  cout << ans-1 << endl;

  return 0;
}
