class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res = {-1, -1};
        if (n == 0)
            return res;
        for (int i = 0; i < 2; i++) {
            int l = 0;
            int r = n - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (nums[mid] == target) {
                    res[i] = mid;

                    if (i == 0)
                        r = mid - 1;
                    else
                        l = mid + 1;
                } else if (nums[mid] < target)
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return res;
    }
};
