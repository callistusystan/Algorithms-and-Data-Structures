#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int N;
string S;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  cin >> S; N = S.size();

  for (int i=0;i<N;i++) {
    if (S[i] == '0' || S[i] == '8') {
      cout << "YES" << endl;
      cout << S[i] << endl;
      return 0;
    }
  }

  for (int i=0;i<N-1;i++) {
    for (int j=i+1;j<N;j++) {
      int val = (S[i]-'0')*10 + (S[j]-'0');
      if (val%8 == 0) {
        cout << "YES" << endl;
        cout << val << endl;
        return 0;
      }
    }
  }

  for (int i=0;i<N-2;i++) {
    for (int j=i+1;j<N-1;j++) {
      for (int k=j+1;k<N;k++) {
        int val = (S[i]-'0')*100 + (S[j]-'0')*10 + (S[k]-'0');
        if (val%8 == 0) {
          cout << "YES" << endl;
          cout << val << endl;
          return 0;
        }
      }
    }
  }

  cout << "NO" << endl;

  return 0;
}
