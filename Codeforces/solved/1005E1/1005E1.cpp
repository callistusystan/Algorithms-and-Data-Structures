#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >> M;
  vi A(N), less(N), more(N);
  int idx;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i] == M) idx = i;
    if (i) {
      less[i] = less[i-1];
      more[i] = more[i-1];
    }
    less[i] += A[i] < M;
    more[i] += A[i] > M;
  }
  
  return 0;
}
