#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int i = 0;
  while (i < N) {
    if (S.substr(i,3) == "ogo") {
      cout << "***";
      i += 3;
      while (i < N && S.substr(i,2) == "go") i += 2;
    } else {
      cout << S[i];
      i++;
    }
  }
  cout << endl;
  return 0;
}
