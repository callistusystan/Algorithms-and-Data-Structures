#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<vi> pos = {
  {0,8},
  {0,1,3,4,7,8,9},
  {2,8},
  {3,8,9},
  {4,8,9},
  {5,6,8,9},
  {6,8},
  {0,3,7,8,9},
  {8},
  {8,9}
};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int ans = 1;
  for (int i=0;i<2;i++) {
    ans *= pos[S[i]-'0'].size();
  }
  cout << ans << endl;
  return 0;
}
