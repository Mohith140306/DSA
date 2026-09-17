class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int ls=0;
        for(int i=0;i<n;i++)
        { 
            sum=sum+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            if(ls==sum-ls-nums[i])
            {
                return i;
            }
            ls=ls+nums[i];
        }
        return -1;
    }
};