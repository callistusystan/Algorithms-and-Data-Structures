#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int N;
vector<pii> A;

void print() {
  for (pii p : A) cout << p.second << " ";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> N; A.resize(N);
  for (int i=0;i<N;i++) {
    cin >> A[i].first;
    A[i].second = i+1;
  }
  sort(A.begin(), A.end());
  vector<pii> swaps;
  for (int i=1;i<N;i++) {
    if (A[i-1].first == A[i].first) {
      swaps.push_back({ i-1, i });
    }
  }
  if (swaps.size() < 2) cout << "NO\n";
  else {
    cout << "YES\n";
    print();
    swap(A[swaps[0].first], A[swaps[0].second]);
    print();
    swap(A[swaps[1].first], A[swaps[1].second]);
    print();
  }
  return 0;
}
