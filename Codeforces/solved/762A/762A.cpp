#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  ll N; int K; cin >> N >> K;
  set<ll> divisors;
  for (ll i=1;i*i<=N;i++) {
    if (N%i == 0) {
      divisors.insert(i);
      divisors.insert(N/i);
    }
  }
  if (K > (int)divisors.size()) {
    cout << "-1\n";
  } else {
    auto it = divisors.begin();
    int i=1;
    while (i<K) {
      it++;
      i++;
    }
    cout << *it << endl;
  }
  return 0;
}
