#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  int X = 0;
  for (int i=0;i<N;i++) {
    string S; cin >> S;
    if (S[0] == '+' || S[2] == '+') X++;
    else X--;
  }

  cout << X << endl;

  return 0;
}
