#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  ll sum = 0;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    sum += A[i];
  }
  ll cur = 0;
  for (int i=0;i<N;i++) {
    cur += A[i];
    if (cur >= (sum+1)/2) {
      cout << i+1 << endl;
      return 0;
    }
  }
  return 0;
}
