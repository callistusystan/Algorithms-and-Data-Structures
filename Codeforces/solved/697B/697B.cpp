#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S; cin >> S;
  // get power
  int idx = S.find('e');
  int b = stoi(S.substr(idx+1));

  // get sig figs
  S = S.substr(0, idx);

  // get index of dot
  int dot = S.find('.');
  for (int i=0;i<b;i++) {
    if (dot+1 == (int)S.size()) S += '0';
    swap(S[dot], S[dot+1]);
    dot++;
  }
  // pop leading zeroes
  reverse(S.begin(), S.end());
  while (S.back() == '0') S.pop_back();
  if (S.back() == '.') S += '0';

  // pop trailing zeroes
  reverse(S.begin(), S.end());
  while (S.back() == '0') S.pop_back();
  if (S.back() == '.') S.pop_back();
  cout << S << endl;
  return 0;
}
