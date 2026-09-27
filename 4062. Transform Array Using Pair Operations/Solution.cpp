class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        long long s1 = 0, s2 = 0;
        for (int s : source)
            s1 += s;
        for (int t : target)
            s2 += t;
        return s1 == s2;
    }
};
