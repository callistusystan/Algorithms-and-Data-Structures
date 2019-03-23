#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string vowels = "aeiou";

int type(char c) {
  if (vowels.find(c) != string::npos) return 0;
  return 1;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S >> T;
  int N, M;
  N = S.size() , M = T.size();
  if (N != M) {
    cout << "No\n";
    return 0;
  }
  for (int i=0;i<N;i++) {
    if (type(S[i]) != type(T[i])) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}
