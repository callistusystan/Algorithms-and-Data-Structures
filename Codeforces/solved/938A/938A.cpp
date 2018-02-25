#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string V = "aeiouy";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S, T; cin >> S;
  T += S[0];
  for (int i=1;i<N;i++) {
    if (V.find(S[i]) == string::npos) T += S[i];
    else if (V.find(T.back()) == string::npos) T += S[i];
  }
  cout << T << endl;
  return 0;
}
