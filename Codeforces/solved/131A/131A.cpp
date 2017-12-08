#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  bool accident = true;
  for (int i=1;i<N;i++) {
    if (islower(S[i])) accident = false;
  }

  if (accident) {
    for (int i=0;i<N;i++) {
      if (isupper(S[i])) S[i] = tolower(S[i]);
      else S[i] = toupper(S[i]);
    }
  }

  cout << S << endl;

  return 0;
}
