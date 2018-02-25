#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string GROUP[] = {"", "Thousand", "Million", "Billion", "Trillion"};
string D20[] = {"Zero", "One", "Two",	"Three", "Four", "Five", "Six",	"Seven",
"Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
"Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string PREFIX[] = {"","","Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety", "Hundred"};

string g(ll N) {
  string ans;
  if (N >= 100) {
    ans += D20[N/100] + " " + "Hundred";
    if (N%100) ans += " ";
  }
  if (N%100) {
    if (N%100 < 20) ans += D20[N%100];
    else {
      ans += PREFIX[(N%100)/10];
      if (N%10) ans += " " + D20[N%10];
    }
  }
  return ans;
}

string f(ll N) {
  vector<string> res;

  int i = 0;
  while (N) {
    if (N%1000) {
      if (i) res.push_back(GROUP[i]);
      res.push_back(g(N%1000));
    }
    N /= 1000;
    i++;
  }
  reverse(res.begin(), res.end());
  string ans;
  for (int i=0;i<(int)res.size();i++) {
    if (i) ans += " ";
    ans += res[i];
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int T; cin >> T;
  while (T--) {
    ll N; cin >> N;
    if (N == 0) cout << "Zero\n";
    else cout << f(N) << endl;
  }
  return 0;
}
