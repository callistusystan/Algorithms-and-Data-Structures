#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, K; cin >> N >> K;
  int freq[K] = {0};
  string S; cin >> S;
  for (char c : S) freq[c-'A']++;
  cout << K * (*min_element(freq, freq + K)) << endl;
  return 0;
}
