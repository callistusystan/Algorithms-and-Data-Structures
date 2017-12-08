#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

bool contains(string S, string T) {
  vi countS(26), countT(26);
  for (char c : S) countS[c-'a']++;
  for (char c : T) countT[c-'a']++;

  for (int i=0;i<26;i++) {
    if (countS[i] < countT[i]) return false;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  string S, T; cin >> S >> T;
  if (contains(S, T)) {
    bool needAuto, needArray;
    needAuto = false; needArray = true;
    if (S.size() > T.size()) needAuto = true;

    int i=0, j=0;
    while (i < (int)S.size() && j < (int)T.size()) {
      if (S[i] == T[j]) j++;
      i++;
    }
    if (j == (int)T.size()) needArray = false;
    if (needAuto && needArray) cout << "both";
    else if (needAuto) cout << "automaton";
    else if (needArray) cout << "array";
    else cout << "need tree";
  } else {
    cout << "need tree";
  }
  cout << endl;
  return 0;
}
