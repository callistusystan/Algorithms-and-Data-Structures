// https://leetcode.com/problems/subdomain-visit-count/description/

class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> domainCount;
        for (string cp : cpdomains) {
            int delim = cp.find(' ');
            int count = stoi(cp.substr(0, delim));
            cp = cp.substr(delim+1);
            while (cp.find('.') != string::npos) {
                domainCount[cp] += count;
                int dot = cp.find('.');
                cp = cp.substr(dot+1);
            }
            domainCount[cp] += count;
        }
        vector<string> ans;
        for (pair<string, int> p : domainCount) {
            ans.push_back(to_string(p.second) + " " + p.first);
        }
        return ans;
    }
};
