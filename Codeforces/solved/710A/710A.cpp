#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int dr[] = {-1,-1,0,1,1,1,0,-1};
int dc[] = {0,1,1,1,0,-1,-1,-1};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int r,c;
  r = S[1]-'1';
  c = S[0]-'a';

  int ans = 0;
  for (int i=0;i<8;i++) {
    int newR,newC;
    newR = r+dr[i];
    newC = c+dc[i];
    if (0 <= newR && newR < 8 && 0 <= newC && newC < 8) ans++;
  }
  cout << ans << endl;

  return 0;
}
