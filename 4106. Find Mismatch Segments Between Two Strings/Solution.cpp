class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        int n = s1.size();
        int i = 0;
        while (i < n) {
            if (s1[i] == s2[i]) {
                i++;
                continue;
            }
            int st = i;
            while (i < n && s1[i] != s2[i])
                i++;
            string st1 = s1.substr(st, i - st);
            string st2 = s2.substr(st, i - st);
            ans.push_back({st1, st2});
        }
        return ans;
    }
};
