#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T, left,right; cin >> S >> T;
  int pivot = S.find('|');
  left = S.substr(0, pivot);
  right = S.substr(pivot+1);
  int mx = max(left.size(), right.size()), mn = min(left.size(), right.size());
  int need = mx-mn;
  if ((int)T.size() < need) cout << "Impossible\n";
  else {
    int remain = T.size() - need;
    if (remain%2) cout << "Impossible\n";
    else {
      cout << left << T.substr(0, mx-left.size()+ remain/2) << '|';
      reverse(T.begin(), T.end());
      cout << right << T.substr(0, mx-right.size()+ remain/2) << endl;
    }
  }
  return 0;
}
