#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<ll> pos, neg, zeroes;
  for (int i=0;i<N;i++) {
    ll ai; cin >> ai;
    if (ai > 0) pos.push_back(ai);
    else if (ai == 0) zeroes.push_back(ai);
    else neg.push_back(ai);
  }

  cout << 1 << " " << neg[0] << endl;
  int i, j;
  i = 1;
  j = 0;
  if (neg.size() >= 3) {
    cout << 2 << " " << neg[1] << " " << neg[2] << endl;
    i = 3;
  } else {
    cout << 1 << " " << pos[0] << endl;
    j = 1;
  }

  cout << N - (i+j);
  for (int k=i;k<(int)neg.size();k++) {
    cout << " " << neg[k];
  }
  for (int k=j;k<(int)pos.size();k++) {
    cout << " " << pos[k];
  }
  for (int k=0;k<(int)zeroes.size();k++) {
    cout << " " << zeroes[k];
  }
  cout << endl;
  return 0;
}
