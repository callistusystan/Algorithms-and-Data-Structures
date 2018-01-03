#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  for (int i=0;i<N;i++) cin >> A[i];
  sort(A.begin(), A.end());
  vector<vi> boxes;
  for (int i=0;i<N;i++) {
    bool done = false;
    for (int j=0;j<(int)boxes.size();j++) {
      if (A[i] > boxes[j].back()) {
        boxes[j].push_back(A[i]);
        done = true;
        break;
      }
    }
    if (!done) boxes.push_back({ A[i] });
  }
  cout << boxes.size() << endl;
  return 0;
}
