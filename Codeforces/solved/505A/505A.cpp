#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool isPal(string S) {
  int N = S.size();
  for (int i=0;i<N/2;i++) {
    if (S[i] != S[N-1-i]) return 0;
  }
  return 1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();
  for (int i=0;i<N+1;i++) {
    string T = S;
    T.insert(i, ".");
    T[i] = T[N-i];
    if (isPal(T)) {
      cout << T << endl;
      return 0;
    }
  }
  cout << "NA\n";
  return 0;
}
