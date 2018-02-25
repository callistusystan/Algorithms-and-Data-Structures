#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int fac(int n) {
  if (n == 0) return 1;
  return n*fac(n-1);
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    int N; cin >> N; N--;
    string S(13, 'a');
    vi used(13);
    for (int i=0;i<13;i++) {
      int k = 0;
      for (int j=i;j<13;j++) {
        while (used[k]) k++;
        S[j] = 'a'+k;
        k++;
      }
      int j = i + N/fac(12-i);
      swap(S[i], S[j]);
      used[S[i]-'a'] = 1;
      N %= fac(12-i);
    }
    cout << S << endl;
  }
  return 0;
}
