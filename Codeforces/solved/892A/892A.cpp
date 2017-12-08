#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), B(N);
  ll sum = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    sum += A[i];
  }
  for (int i=0;i<N;i++) cin >> B[i];
  sort(B.begin(), B.end());
  if (B[N-2]+B[N-1] >= sum) cout << "YES";
  else cout << "NO";
  cout << endl;
  return 0;
}
