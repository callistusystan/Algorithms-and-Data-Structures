#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  
  int N; cin >> N;
  vi psum(N);
  for (int i=0;i<N;i++) {
    cin >> psum[i];
    if (i) psum[i] += psum[i-1];
  }
  int ans = 0;
  for (int i=0;i+1<N;i++)
    ans += psum[i] == psum[N-1]-psum[i];
  cout << ans << endl;
  return 0;
}