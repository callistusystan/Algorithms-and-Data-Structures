#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N,Q; cin >> N >> Q;
  set<pii> unread;
  map<int, queue<int>> app_notif;
  int cnt=0;
  for (int i=0;i<Q;i++) {
    int ti, ai; cin >> ti >> ai;
    if (ti == 1) {
      app_notif[ai].push(cnt);
      unread.insert({ cnt, ai });
      cnt++;
    } else if (ti == 2) {
      while (app_notif[ai].size()) {
        unread.erase({ app_notif[ai].front(), ai });
        app_notif[ai].pop();
      }
    } else {
      auto last = unread.lower_bound({ ai, -1 });
      for (auto it=unread.begin();it!=last;it++)
        app_notif[it->second].pop();
      unread.erase(unread.begin(), last);
    }
    cout << unread.size() << endl;
  }
  return 0;
}
