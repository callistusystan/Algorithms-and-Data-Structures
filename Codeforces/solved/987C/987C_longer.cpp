#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi S(N), C(N);
  for (int i=0;i<N;i++) cin >> S[i];
  for (int i=0;i<N;i++) cin >> C[i];
  vi best(N, -1);
  for (int i=0;i+1<N;i++)
    for (int j=i+1;j<N;j++) 
      if (S[j] > S[i]) {
        if (best[i] == -1 || C[i]+C[j] < best[i]) best[i] = C[i] + C[j];
      }
  int ans = -1;
  for (int i=0;i+2<N;i++)
    for (int j=i+1;j<N;j++)
      if (S[j] > S[i] && best[j] != -1) {
        if (ans == -1 || C[i] + best[j] < ans) ans = C[i] + best[j];
      }
  cout << ans << endl;
  return 0;
}
