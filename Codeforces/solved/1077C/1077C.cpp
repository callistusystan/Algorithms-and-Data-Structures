#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), B(N), ans;
  ll sum = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    B[i] = A[i];
    sum += A[i];
  }
  sort(B.begin(), B.end());
  for (int i=0;i<N;i++) {
    ll biggest = A[i] == B[N-1] ? B[N-2] : B[N-1];
    if (sum - A[i] == biggest*2) ans.push_back(i);
  } 
  cout << ans.size() << endl;
  for (int x : ans) cout << x+1 << " ";
  cout << endl; 
  return 0;
}
