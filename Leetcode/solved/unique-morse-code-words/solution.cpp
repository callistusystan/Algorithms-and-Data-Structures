// https://leetcode.com/problems/unique-morse-code-words/description/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> encodings;
        for (string word : words) {
            string encoded;
            for (char c : word) encoded += morse[c-'a'];
            encodings.insert(encoded);
        }
        return encodings.size();
    }
};
