#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string S;
int N;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> S;
  N = S.size();

  vi l,r;
  for (int i=0;i<N;i++) {
    if (S[i] == 'l') r.push_back(i+1);
    else l.push_back(i+1);
  }
  for (int i : l) cout << i << endl;
  for (int i=(int)r.size()-1;i>=0;i--) cout << r[i] << endl;
  return 0;
}
