#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;



vector<string> shortestWords(vector<string> &dictionary, vector<string> &plates) {
  unordered_map<char, unordered_set<string>> wordsWithLetter;
  // preprocess dictionary
  for (string word : dictionary) {
    for (char c: word)
      wordsWithLetter[c].insert(word);
  }

  vector<string> answers;
  // answer queries
  for (string plate : plates) {
    // get letters
    vector<bool> seen(26);
    vector<pair<int, char>> chars;
    for (char c : plate) {
      if (isalpha(c) && !seen[c-'A']) {
        chars.push_back(make_pair(wordsWithLetter[c].size(), c));
        seen[c-'A'] = true;
      }
    }

    // sort from increasing length of wordsWithLetter
    sort(chars.begin(), chars.end());

    // get intersection
    unordered_set<string> candidates;
    // initialize the candidates
    for (string word : wordsWithLetter[chars[0].second]) {
      candidates.insert(word);
    }
    // begin intersection
    for (int i=1;i<(int)chars.size();i++) {
      for (string word : candidates) {
        // if not found, we erase this word
        if (wordsWithLetter[chars[i].second].count(word) == 0) {
          candidates.erase(word);
        }
      }
    }
    string best = "";
    for (string word : candidates) {
      if (best == "" || word.size() < best.size()) {
        best = word;
      }
    }
    answers.push_back(best);
  }
  return answers;
}

int main() {
  ios::sync_with_stdio(0); cin.tie(0);

  int N; cin >> N;
  vector<string> dictionary(N);
  for (int i=0;i<N;i++) cin >> dictionary[i];
  int M; cin >> M;
  vector<string> plates(M);
  for (int i=0;i<M;i++) cin >> plates[i];

  vector<string> results = shortestWords(dictionary, plates);
  for (string ans : results) cout << ans << endl;
  return 0;
}
