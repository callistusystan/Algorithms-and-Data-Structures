#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string V = "aeiouy";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi P(N);
  for (int i=0;i<N;i++) cin >> P[i];
  cin.ignore();
  for (int i=0;i<N;i++) {
    string line; getline(cin, line);
    int cnt = 0;
    for (char c : line) {
      if (V.find(c) != string::npos) cnt++;
    }
    if (cnt != P[i]) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}
