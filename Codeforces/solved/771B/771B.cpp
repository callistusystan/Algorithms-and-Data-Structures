#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string f(int i) {
  string res;
  while (i) {
    i--;
    res += 'a' + i%26;
    i /= 26;
  }
  reverse(res.begin(), res.end());
  return res;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vector<string> names(N);
  for (int i=0;i<N;i++) {
    names[i] = 'A' + f(i+1);
  }
  for (int i=0;i<N-K+1;i++) {
    string cur; cin >> cur;
    if (cur == "NO") names[i+K-1] = names[i];
  }
  for (int i=0;i<N;i++) {
    cout << names[i] << " ";
  }
  cout << endl;
  return 0;
}
