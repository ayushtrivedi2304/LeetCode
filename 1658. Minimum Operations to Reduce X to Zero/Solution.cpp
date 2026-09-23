class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
            totalSum += nums[i];

        int target = totalSum - x;

        if (target < 0)
            return -1;
        if (target == 0)
            return n;

        int mxLength = -1;
        int currSum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            currSum += nums[right];

            while (currSum > target && left <= right) {
                currSum -= nums[left];
                left++;
            }

            if (currSum == target) {
                mxLength = max(mxLength, right - left + 1);
            }
        }

        return mxLength == -1 ? -1 : n - mxLength;
    }
};
