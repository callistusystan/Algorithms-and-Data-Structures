#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  map<char, int> cnt;
  for (char c : S) {
    cnt[c]++;
  }
  cout << 2*min(cnt['U'], cnt['D']) + 2*min(cnt['L'], cnt['R']) << endl;
  return 0;
}
