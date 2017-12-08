#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), C(N);
  priority_queue<pii, vector<pii>, greater<pii>> B;
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<N;i++) {
    int bi; cin >> bi;
    B.push({ bi, i });
  }
  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());
  for (int ai : A) {
    pii top = B.top(); B.pop();
    C[top.second] = ai;
  }
  for (int i=0;i<N;i++) cout << C[i] << " \n"[i==N-1];
  return 0;
}
