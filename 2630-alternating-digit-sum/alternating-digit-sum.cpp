class Solution {
public:
    int alternateDigitSum(int n) {
       int sum=0;
       int count=0;
       int rev=0;
       while(n>0)
       {
         rev=rev*10+(n%10);
         n=n/10;
       }
       while(rev!=0)
       {
         int d=rev%10;
         count++;
         if(count==1)
         {
            sum=sum+d;
         }
         if(count==2)
         {
            sum=sum-d;
            count=0;
         }
         rev=rev/10;
       } 
       return sum;
    }
};