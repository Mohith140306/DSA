class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int m=0;
       while(i<j)
       {
          int ch=min(height[i],height[j]);
          int width=j-i;
          int area=ch * width;
          m=max(area,m);
          if(height[i]<height[j])
          {
            i++;
          }
          else j--;
       }
       return m;
    }
};