#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vi isPrime(100, 1), composites;
  for (ll i=2;i<100;i++) {
    if (isPrime[i]) {
      for (ll j=i*i;j<100;j+=i) isPrime[j] = 0;
    } else composites.push_back(i);
  }
  vi count(100);
  for (int i=4;i<100;i++) {
    count[i] = !isPrime[i];
    for (int c : composites) {
      if (i-c <= 0) break;
      if (count[i-c]) count[i] = max(count[i], 1+count[i-c]);
    }
  }
  int N; cin >> N;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    if (ai < 100) {
      if (count[ai]) cout << count[ai] << endl;
      else cout << "-1\n";
    } else {
      int ans = ai/4;
      ai -= ans*4;
      while (!count[ai]) {
        ai += 4;
        ans--;
      }
      cout << ans + count[ai] << endl;
    }
  }
  return 0;
}
