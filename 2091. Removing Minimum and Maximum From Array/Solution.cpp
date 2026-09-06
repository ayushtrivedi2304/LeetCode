class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mnIdx = min_element(nums.begin(), nums.end()) - nums.begin();
        int mxIdx = max_element(nums.begin(), nums.end()) - nums.begin();

        int left = min(mnIdx, mxIdx);
        int right = max(mnIdx, mxIdx);

        int front = right + 1;
        int back = n - left;
        int mid = (left + 1) + (n - right);
        return min({front, back, mid});
    }
};
