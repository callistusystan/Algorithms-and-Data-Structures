#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  vi freq(200);
  for (int i=0;i<N;i++) {
    string si; cin >> si;
    freq[si.size()]++;
  }
  string P; cin >> P;

  int nShorter = 0;
  for (int i=0;i<(int)P.size();i++) {
    nShorter += freq[i];
  }

  cout << nShorter + nShorter/K*5 + 1 << " ";
  cout << nShorter + freq[P.size()] + (nShorter+freq[P.size()]-1)/K*5 << endl;

  return 0;
}
