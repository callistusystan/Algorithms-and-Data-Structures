#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string vowels = "aeiouyAEIOUY";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S;
  getline(cin, S);
  int N = S.size();
  for (int i=N-1;i>=0;i--)  {
    if (isalpha(S[i])) {
      if (vowels.find(S[i]) != string::npos) cout << "YES\n";
      else cout << "NO\n";
      return 0;
    }
  }
  return 0;
}
