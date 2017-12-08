#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

string C = "AOYEUIaoyeui";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  for (int i=0;i<N;i++) {
    if (find(C.begin(), C.end(), S[i]) == C.end()) {
      cout << '.';
      if (isupper(S[i])) {
        S[i] = tolower(S[i]);
      }
      cout << S[i];
    }
  }
  cout << endl;

  return 0;
}
