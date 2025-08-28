//This is the 1st problem Ive solved in Dynamic Programming<<
class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        //Otherwise
        int dp[50],i; dp[1]=1,dp[2]=2; //Aux array for the dynamic array
        for(i=3;i<=n;i++) //So Loop starts from 3 as teh value of dp[1] & dp[2] is already we know, and we are also goiing to see that...
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
//Basically how we are using the dp array to memorize the number of steps, is basically the approach of the Dynamic Programming !
    }
};
