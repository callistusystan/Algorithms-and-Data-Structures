#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N, L, R, X;
vi A(20);

ll rec(int id, ll sum, int smallest, int largest) {
  if (id == N) {
    if (L <= sum && sum <= R && largest - smallest >= X) return 1;
    else return 0;
  }
  ll res1, res2;
  res1 = rec(id+1, sum, smallest, largest);
  if (smallest == -1) smallest = A[id];
  if (largest == -1) largest = A[id];
  res2 = rec(id+1, sum+A[id], min(smallest, A[id]), max(largest, A[id]));
  return res1 + res2;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N >> L >> R >> X;
  for (int i=0;i<N;i++) cin >> A[i];

  cout << rec(0, 0, -1, -1) << endl;
  return 0;
}
