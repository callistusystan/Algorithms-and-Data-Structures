#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> X(N);
  for (int i=0;i<N;i++) {
    cin >> X[i];
  }

  for (int i=0;i<N;i++) {
    if (i == 0)
      cout << X[1] - X[0];
    else if (i == N-1)
      cout << X[N-1]-X[N-2];
    else
      cout << min(X[i]-X[i-1], X[i+1]-X[i]);

    cout << " ";

    cout << max(X[i]-X[0], X[N-1]-X[i]) << endl;
  }

  return 0;
}
