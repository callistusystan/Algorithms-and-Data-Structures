#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  if (N == 1) {
    cout << "Yes\n";
    return 0;
  }
  string S; cin >> S;
  vector<int> freq(26);
  for (char c : S) freq[c-'a']++;
  if (*max_element(freq.begin(), freq.end()) > 1) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}
