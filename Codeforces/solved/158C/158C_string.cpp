#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

string cur = "/";

void goUp() {
  if (cur.back() == '/') cur.pop_back();
  while (cur.back() != '/') cur.pop_back();
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  for (int i=0;i<N;i++) {
    string command; cin >> command;
    if (command == "pwd") {
      cout << cur << endl;
    } else {
      string path; cin >> path;
      string folder;
      int j;
      if (path[0] == '/') {
        cur = "/";
        j = 1;
      } else {
        j = 0;
      }
      for (;j<(int)path.size();j++) {
        if (path[j] == '/') {
          if (folder == "..") goUp();
          else cur += folder + '/';
          folder = "";
        } else {
          folder += path[j];
        }
      }
      if (folder == "..") goUp();
      else cur += folder + '/';
    }
  }
  return 0;
}
