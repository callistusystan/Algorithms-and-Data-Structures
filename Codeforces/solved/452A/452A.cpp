#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> names = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  for (string name : names) {
    if (name.size() != N) continue;
    bool match = true;
    for (int i=0;i<N;i++) {
      if (S[i] == '.') continue;
      if (S[i] != name[i]) match = false;
    }
    if (match) {
      cout << name << endl;
      return 0;
    }
  }
  return 0;
}
