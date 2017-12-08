#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

string pos = "RBYG";

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  vi freq(4);
  string pattern(4,'.');
  for (int i=0;i<N;i++) {
    if (S[i] != '!') pattern[i%4] = S[i];
  }

  for (int i=0;i<N;i++) {
    if (S[i] == '!') {
      freq[pos.find(pattern[i%4])]++;
    }
  }

  for (int i=0;i<4;i++) {
    cout << freq[i] << " \n"[i==3];
  }

  return 0;
}
