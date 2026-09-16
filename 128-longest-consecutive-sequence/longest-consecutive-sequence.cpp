class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int total=1;
        sort(nums.begin(),nums.end());
        int count=1;
        if(n==1)
        {
            return 1;
        }
        if(n==0) return 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1)
            {
                count++;
            }
            else count=1;
            if(count>total)
            {
                total=count;
            }
        }
        return total;
    }
};