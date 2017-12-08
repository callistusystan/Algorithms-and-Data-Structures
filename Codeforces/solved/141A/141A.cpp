#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S1,S2,S3; cin >> S1 >> S2 >> S3;

  vi need(26);
  for (char c : S1) {
    need[c - 'A']++;
  }
  for (char c : S2) {
    need[c - 'A']++;
  }

  bool can = true;
  for (char c : S3) {
    if (need[c-'A'] == 0) {
      can = false;
      break;
    } else {
      need[c-'A']--;
    }
  }

  if (can && (S1.size() + S2.size() == S3.size())) cout << "YES";
  else cout << "NO";
  cout << endl;

  return 0;
}
