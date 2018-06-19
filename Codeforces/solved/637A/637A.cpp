#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi cnt(1e6+5);
  int mx_i = -1;
  for (int i=0;i<N;i++) {
    int ai; cin >> ai;
    cnt[ai]++;
    if (mx_i == -1) mx_i = ai;
    else {
      if (cnt[ai] > cnt[mx_i]) mx_i = ai;
    }
  }
  cout << mx_i << endl;  
  return 0;
}
