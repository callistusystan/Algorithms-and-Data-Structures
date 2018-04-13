#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  string S; cin >> S;
  int cntX = count(S.begin(), S.end(), 'X');
  cout << abs(cntX - N/2) << endl;
  for (int i=0;i<N;i++) {
    if (cntX < N/2 && S[i] == 'x') {
      S[i] = 'X';
      cntX++;
    } else if (cntX > N/2 && S[i] == 'X') {
      S[i] = 'x';
      cntX--;
    }
  }
  cout << S << endl;
  return 0;
}
