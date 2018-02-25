#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi F(N);
  for (int i=0;i<N;i++) {
    cin >> F[i];
    F[i]--;
  }
  for (int A=0;A<N;A++) {
    int B = F[A];
    int C = F[B];
    if (A != B && B != C &&
        F[A] == B && F[B] == C && F[C] == A) {
          cout << "YES\n";
          return 0;
        }
  }
  cout << "NO\n";
  return 0;
}
