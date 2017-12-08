#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<string> parse(string path) {
  vector<string> ans;
  int last = 0;
  for (int i=0;i<(int)path.size();i++) {
    if (path[i] == '/') {
      ans.push_back(path.substr(last, i-last));
      last = i+1;
    }
  }
  ans.push_back(path.substr(last));
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> folders;
  for (int i=0;i<N;i++) {
    string cmd; cin >> cmd;
    if (cmd == "pwd") {
      cout << "/";
      for (string f : folders) cout << f << "/";
      cout << endl;
    } else {
      string path; cin >> path;
      if (path[0] == '/') {
        folders.clear();
        path = path.substr(1);
      }
      vector<string> tmp = parse(path);
      for (string s : tmp) {
        if (s == "..") folders.pop_back();
        else folders.push_back(s);
      }
    }
  }
  return 0;
}
