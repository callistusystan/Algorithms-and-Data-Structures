#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string vowel = "aeiou";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  vector<string> A(3);
  for (int i=0;i<3;i++) {
    string line;
    getline(cin, line);
    int cnt = 0;
    for (char c : line)
      if (vowel.find(c) != string::npos) cnt++;
    if (i%2 && cnt == 7) continue;
    if (i%2 == 0 && cnt == 5) continue;
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n";
  return 0;
}
