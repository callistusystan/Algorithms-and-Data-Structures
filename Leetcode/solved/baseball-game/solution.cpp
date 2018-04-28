// https://leetcode.com/problems/baseball-game/description/

class Solution {
public:
    int calPoints(vector<string>& ops) {
        int N = ops.size();
        vector<pair<int, int>> rounds;
        for (int i=0;i<N;i++) {
            int L = rounds.size();
            int prevSum = 0;
            int points;
            if (L > 0) prevSum = rounds.back().second;

            if (ops[i] == "+") {
                points = rounds[L-2].first + rounds[L-1].first;
                rounds.push_back({ points, prevSum + points });
            } else if (ops[i] == "D") {
                points = rounds.back().first*2;
                rounds.push_back({ points, prevSum + points });
            } else if (ops[i] == "C") {
                if (rounds.size() > 0) rounds.pop_back();
            } else {
                // integer
                points = stoi(ops[i]);
                rounds.push_back({ points, prevSum + points });
            }
        }
        if (rounds.size() == 0) return 0;
        return rounds.back().second;
    }
};
