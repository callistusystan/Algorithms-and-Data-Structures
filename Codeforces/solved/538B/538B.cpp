#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  int N = S.size();

  int d = *max_element(S.begin(), S.end()) - '0';
  cout << d << endl;
  for (int i=0;i<d;i++) {
    string cur = "";
    for (int j=0;j<N;j++) {
      if (S[j] == '0') {
        cur += '0';
      } else {
        S[j]--;
        cur += '1';
      }
    }
    cout << stoi(cur) << " ";
  }
  cout << endl;

  return 0;
}
