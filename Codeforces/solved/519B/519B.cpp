#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;

  vi nums1(N), nums2(N-1);
  map<int, int> S1,S2;
  for (int i=0;i<N;i++) {
    cin >> nums1[i];
  }

  for (int i=0;i<N-1;i++) {
    cin >> nums2[i];
    S1[nums2[i]]++;
  }

  for (int i=0;i<N;i++) {
    if (!S1.count(nums1[i]) || S1[nums1[i]] <= 0) {
      cout << nums1[i] << endl;
      break;
    }
    S1[nums1[i]]--;
  }

  for (int i=0;i<N-2;i++) {
    int ai; cin >> ai;
    S2[ai]++;
  }

  for (int i=0;i<N-1;i++) {
    if (!S2.count(nums2[i]) || S2[nums2[i]] <= 0) {
      cout << nums2[i] << endl;
      break;
    }
    S2[nums2[i]]--;
  }

  return 0;
}
