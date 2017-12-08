#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N, M; cin >> N >>M;
  vi score(N);
  for (int i=0;i<M;i++) {
    vi votes(N);
    for (int j=0;j<N;j++) cin >> votes[j];

    auto it = max_element(votes.begin(), votes.end());
    score[it-votes.begin()]++;
  }

  auto it = max_element(score.begin(), score.end());
  cout << it-score.begin()+1 << endl;

  return 0;
}
