#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool isPrime(ll x) {
  if (x == 1) return false;
  for (ll i=2;i*i<=x;i++) {
    if (x%i == 0) return false;
    while (x%i == 0) x /=i;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  int x = N;
  while (!isPrime(x)) x--;
  vi ans = { x };
  for (int i=2;i<=N-x;i++) {
    int j = N-x-i;
    if (isPrime(i) && (j == 0 || isPrime(j))) {
      ans.push_back(i);
      if (j > 0) ans.push_back(j);
      break;
    }
  }
  cout << ans.size() << endl;
  for (int i=0;i<(int)ans.size();i++) cout << ans[i] << " \n"[i==(int)ans.size()-1];
  return 0;
}
