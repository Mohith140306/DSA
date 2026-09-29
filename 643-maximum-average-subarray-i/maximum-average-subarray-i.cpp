class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double sum=0;
        int l=0;
        double avg=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            if(i-l+1>k)
            {
                sum=sum-nums[l];
                l++;
            }
           if(i-l+1==k){
             avg=max(sum/k,avg);
           }
        }
        return avg;
    }
};