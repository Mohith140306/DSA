class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int m=items[0].size();
        int count=0;
        if(ruleKey=="type")
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<=0;j++)
                {
                    if(ruleValue==items[i][j])
                    {
                        count++;
                    }
                }
            }
        }
        else if(ruleKey=="color")
        {
            for(int i=0;i<n;i++)
            {
                for(int j=1;j==1;j++)
                {
                    if(ruleValue==items[i][j])
                    {
                        count++;
                    }
                }
            }
        }
        else if(ruleKey=="name")
        {
            for(int i=0;i<n;i++)
            {
                for(int j=2;j==2;j++)
                {
                    if(ruleValue==items[i][j])
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};