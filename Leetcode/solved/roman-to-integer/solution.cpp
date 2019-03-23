// https://leetcode.com/problems/roman-to-integer/description/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> val{
            { "I", 1 },
            { "IV", 4 }, 
            { "V", 5 },
            { "IX", 9 }, 
            { "X", 10 }, 
            { "XL", 40 }, 
            { "L", 50 }, 
            { "XC", 90 }, 
            { "C", 100 },
            { "CD", 400 }, 
            { "D", 500 }, 
            { "CM", 900 }, 
            { "M", 1000 }
        };
        int ans = 0;
        for (int i=0;i<(int)s.size();i++) {
            if (val.count(s.substr(i, 2))) {
                ans += val[s.substr(i, 2)];
                i++;
            } else ans += val[s.substr(i, 1)];
        }
        return ans;
    }
};