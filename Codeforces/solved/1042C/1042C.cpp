#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vi A(2e5+5), pos, zeros, neg;

bool f(int a, int b) {
  return A[a] < A[b];
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N;i++) {
    cin >> A[i];
    if (A[i] > 0) pos.push_back(i);
    else if (A[i] == 0) zeros.push_back(i);
    else neg.push_back(i);
  }
  int nneg = neg.size();
  bool canPos = pos.size() || nneg >= 2;
  if (canPos) {
    int last = -1;
    for (int i : pos) {
      if (last != -1) cout << "1 " << last+1 << " " << i+1 << endl;
      last = i;
    } 
    int lastDel = -1;
    if (nneg >= 2) {
      sort(neg.begin(), neg.end(), f);
      if (nneg%2) lastDel = neg.back();
      for (int i=0;i<nneg-(nneg%2);i++) {
        if (last != -1) cout << "1 " << last+1 << " " << neg[i]+1<< endl;
        last = neg[i];
      }
    } else if (nneg == 1) lastDel = neg[0];
    for (int i : zeros) {
      if (lastDel != -1) cout << "1 " << lastDel+1 << " " << i+1 << endl;
      lastDel = i;
    }
    if (lastDel != -1) cout << "2 " << lastDel+1 << endl;
  } else {
    int mx = max_element(A.begin(), A.begin()+N) - A.begin();
    int lastDel = -1;
    for (int i=0;i<N;i++) {
      if (i == mx) continue;
      if (lastDel != -1) cout << "1 " << lastDel+1 << " " << i+1 << endl;
      lastDel = i;
    }
    cout << "2 " << lastDel+1 << endl;
  }
  return 0;
}
