class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int sum=INT_MAX;
        int total=0;
        for(int i=0;i<n;i++)
        {
            if(prices[i]<sum)
            {
                sum=prices[i];
            }
            else if(prices[i]-sum>total)
            {
                total=prices[i]-sum;
            }
        }
        return total;
    }
};