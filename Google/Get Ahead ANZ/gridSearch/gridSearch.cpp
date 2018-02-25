#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

struct Node {
  int data;
  vector<Node*> children;
};

void dfs(Node *cur, int prev, int length, int &ans) {
  // length is the number of nodes that are part of
  // this sequence
  ans = max(ans, length);
  for (Node *child : cur->children) {
    if (cur->data+1 == child->data) {
      // set length if child follows the sequence
      if (length) dfs(child, cur->data, length+1, ans);
      else dfs(child, cur->data, 2, ans);
    } else {
      // length is 0 if child does not follow the sequence
      dfs(child, cur->data, 0, ans);
    }
  }
}

int longestPath(Node *root) {
  int ans = 0;
  for (Node *child : root->children) {
    if (root->data+1 == child->data) {
      // if child follows the sequence, we form a
      // path of at least length 2
      dfs(child, root->data, 2, ans);
    } else {
      // child does not follow the sequence, so path
      // length is still 0
      dfs(child, root->data, 0, ans);
    }
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<Node> nodes(N);
  for (int i=0;i<N;i++) cin >> nodes[i].data;
  for (int i=0;i<N-1;i++) {
    int u,v; cin >> u >> v;
    u--; v--;
    nodes[u].children.push_back(&nodes[v]);
  }
  cout << longestPath(&nodes[0]) << endl;
  return 0;
}
