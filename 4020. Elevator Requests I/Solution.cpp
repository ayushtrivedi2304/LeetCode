class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans=0;
        int temp=0;
        for(int i:requests)
            {
                ans+=abs(temp-i);
                temp=i;
            }
        return ans;
    }
};
