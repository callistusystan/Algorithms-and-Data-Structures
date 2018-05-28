#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  map<char, int> time;
  time['f'] = 1;
  time['e'] = 2; 
  time['d'] = 3; 
  time['a'] = 4; 
  time['b'] = 5; 
  time['c'] = 6; 
  ll N; char c; cin >> N >> c;
  N--;
  ll roundsBeforeTurn = N/4;
  bool isFirst = (N%4)%2 == 0;
  cout << roundsBeforeTurn*(6+1+6+3) + (isFirst ? 0 : 7) + time[c] << endl;
  return 0;
}
