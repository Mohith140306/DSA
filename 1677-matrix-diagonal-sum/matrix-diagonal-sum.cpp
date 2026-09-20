class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    sum=sum+mat[i][j];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(n%2!=0)
            {
                if(n/2==i){
                    continue;
                }
                else{
                    sum=sum+mat[i][n-1-i];
                }
            }
            else{
                sum=sum+mat[i][n-1-i];
            }
        }
        return sum;
    }
};