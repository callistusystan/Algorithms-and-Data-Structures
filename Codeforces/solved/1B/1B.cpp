#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

bool isExcel(string &S) {
  bool num = false;
  for (char c : S) {
    if (!isalpha(c)) num = true;
    if (num && isalpha(c)) {
      return false;
    }
  }
  return true;
}

string toRC(string &S) {
  int N = S.size();
  int rowStart;
  for (int i=0;i<N;i++) {
    if (!isalpha(S[i])) {
      rowStart = i;
      break;
    }
  }

  int col = 0, b = 1;
  for (int i=rowStart-1;i>=0;i--) {
    col += (S[i]-'A'+1)*b;
    b*=26;
  }

  return "R" + S.substr(rowStart) + "C" + to_string(col);
}

string toExcel(string &S) {
  int N = S.size();
  string R, C; bool atR=true;
  for (int i=1;i<N;i++) {
    if (isalpha(S[i])) atR = false;
    else {
      if (atR) R += S[i];
      else C += S[i];
    }
  }

  int col = stoi(C);

  string res;
  while (col > 0) {
    col--;
    res += 'A' + (col%26);
    col/=26;
  }
  reverse(res.begin(), res.end());

  return res + R;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N;i++) {
    string S; cin >> S;
      if (isExcel(S)) {
        cout << toRC(S) << endl;
    } else {
      cout << toExcel(S) << endl;
    }
  }

  return 0;
}
