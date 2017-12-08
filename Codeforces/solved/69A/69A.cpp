#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi freq(3);

  for (int i=0;i<N;i++) {
    int a,b,c; cin >> a >> b >> c;
    freq[0] += a;
    freq[1] += b;
    freq[2] += c;
  }

  if (freq[0] == 0 && freq[1] == 0 && freq[2] == 0) {
    cout << "YES";
  } else cout << "NO";
  cout << endl;

  return 0;
}
