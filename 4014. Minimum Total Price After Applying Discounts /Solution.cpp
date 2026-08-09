class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double ans = 0.0;
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());
        int a = prices.size();
        int b = discounts.size();
        int k = min(a, b);
        for (int i = 0; i < k; i++) {
            ans += prices[i] * (100 - discounts[i]) / 100.0;
        }
        for (int i = k; i < a; i++) {
            ans += prices[i];
        }
        return ans;
    }
};
