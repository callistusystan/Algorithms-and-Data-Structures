#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<pii> A(N);
  for (int i=0;i<N;i++) cin >> A[i].first >> A[i].second;

  vi home(1e5+5), away(1e5+5);
  for (int i=0;i<N;i++) {
    home[A[i].first]++;
    away[A[i].second]++;
  }
  for (int i=0;i<N;i++) {
    int wearHome, wearAway;
    wearHome = N-1;
    int extraHome = home[A[i].second];
    wearAway = N-1 - extraHome;
    cout << wearHome + extraHome << " " << wearAway << endl;
  }
  return 0;
}
