#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vi A(N);
  map<int, int> cnt;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    cnt[A[i]]++;
  }
  vi nice;
  int is3OrMore = -1;
  for (auto p : cnt) {
    if (p.second == 1) nice.push_back(p.first);
    else if (p.second >= 3) is3OrMore = p.first;
  }
  if (nice.size()%2) {
    if (is3OrMore == -1) cout << "NO\n";
    else {
      cout << "YES\n";
      int n = nice.size();
      for (int i=0;i<N;i++) {
        if (cnt[A[i]] == 1 && A[i] < nice[n/2]) cout << 'A';
        else if (A[i] == is3OrMore) {
          cout << 'A';
          is3OrMore = -1;
        } else cout << 'B';
      }
      cout << endl;
    }
  } else {
    cout << "YES\n";
    int n = nice.size();
    for (int i=0;i<N;i++) {
      if (cnt[A[i]] == 1 && A[i] < nice[n/2]) cout << 'A';
      else cout << 'B';
    }
    cout << endl;
  }
  return 0;
}
