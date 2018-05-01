#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

ll N; 
set<string> seen;

void rec(string S) {
  if (stoll(S) > N) return;
  seen.insert(S);
  rec(S + '0');
  rec(S + '1');
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N;
  rec("1");
  cout << seen.size() << endl;
  return 0;
}
