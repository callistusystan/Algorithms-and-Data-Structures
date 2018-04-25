#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N), price(5);
  for (int i=0;i<N;i++) cin >> A[i];
  for (int i=0;i<5;i++) cin >> price[i];
  ll cur = 0;
  vector<ll> cnt(5);
  for (int i=0;i<N;i++) {
    cur += A[i];
    for (int j=4;j>=0;j--) {
      if (cur >= price[j]) {
        cnt[j] += cur/price[j];
        cur -= cur/price[j]*price[j];
      }
    }
  }
  for (int i=0;i<5;i++) cout << cnt[i] << " ";
  cout << endl << cur << endl;
  return 0;
}
