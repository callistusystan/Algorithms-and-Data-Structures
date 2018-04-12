#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  string T; cin >> T;
  vi has(256), need(256);
  for (char c : T) has[c]++;
  for (char c : S) need[c]++;
  int yay, whoops;
  yay = whoops = 0;
  for (int c=0;c<256;c++) {
    int used = min(has[c], need[c]);
    yay += used;
    has[c] -= used;
    need[c] -= used;
  }
  for (int c=0;c<256;c++) {
    if (need[c]) {
      if (isupper(c) && has[tolower(c)]) {
        int used = min(need[c], has[tolower(c)]);
        whoops += used;
        has[tolower(c)] -= used;
      } else if (islower(c) && has[toupper(c)]) {
        int used = min(need[c], has[toupper(c)]);
        whoops += used;
        has[toupper(c)] -= used;
      }
    }
  }
  cout << yay << " " << whoops << endl;
  return 0;
}
