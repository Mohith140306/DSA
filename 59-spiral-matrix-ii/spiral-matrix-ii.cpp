class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> res(n,vector<int>(n,0));
        int top=0;
        int left=0;
        int bottom=n-1;
        int right=n-1;
        int m=1;
        while(m<=n*n && left<=right && top<=bottom)
        {
              for(int i=left;i<=right;i++)
            {
                res[top][i]=m++;
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
               res[i][right]=m++;
            }
            right--;
            for(int i=right;i>=left;i--)
            {
                res[bottom][i]=m++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--)
            {
                 res[i][left]=m++;
            }
            left++;
        }
        return res;
    }
};