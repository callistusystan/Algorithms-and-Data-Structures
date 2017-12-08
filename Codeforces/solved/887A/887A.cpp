#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  int first, cnt0;
  first = -1;
  cnt0 = 0;
  for (int i=0;i<N;i++) {
    if (S[i] == '1') {
      if (first == -1) first = i;
    } else if (first != -1) cnt0++;
  }

  if (cnt0 >= 6) cout << "yes";
  else cout << "no";
  cout << endl;

  return 0;
}
