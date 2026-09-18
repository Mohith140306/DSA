class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            int low = i + 1;
            int r = n - 1;
        while (low < r) {
            if (nums[i] + nums[low] + nums[r] == 0 && i != low && i != r && low != r) {
                res.push_back({nums[i], nums[low], nums[r]});
                low++;
                r--;
                while(low<r && nums[low]==nums[low-1])
                {
                    low++;                    
                }
                while(low<r && nums[r]==nums[r+1])
                {
                    r--;
                }
            } else if (nums[i] + nums[low] + nums[r] < 0) {
                low++;
            } else {
                r--;
            }
         }
        }
        return res;
    }
};