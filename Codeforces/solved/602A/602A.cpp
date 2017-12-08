#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; ll Bx; cin >> N >> Bx;
  vector<ll> X(N);
  for (int i=0;i<N;i++) cin >> X[i];

  int M; ll By; cin >> M >> By;
  vector<ll> Y(M);
  for (int i=0;i<M;i++) cin >> Y[i];

  ll A, B;
  A = B = 0;
  for (int i=0;i<N;i++) {
    A *= Bx;
    A += X[i];
  }
  for (int i=0;i<M;i++) {
    B *= By;
    B += Y[i];
  }

  if (A < B) cout << "<";
  else if (A == B) cout << "=";
  else cout << ">";
  cout << endl;

  return 0;
}
