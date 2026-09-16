class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else if(nums[i]<0) {
                neg.push_back(nums[i]);
            }
        }
        for(int i=0;i<pos.size();i++)
        { 
            res.push_back(pos[i]);
            for(int j=i;j==i && j<neg.size();j++)
            { 
                res.push_back(neg[j]);
            }
        }
        return res;
    }
};