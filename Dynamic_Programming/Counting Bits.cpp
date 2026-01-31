//Neetcode solution:
class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> dp(n+1,0) ;int offset = 1;
        for(int i=1;i<=n;i++)
        {
            if(offset*2==i) offset=i;
            dp[i] = 1+ dp[i-offset];
        }
    return dp;
    }
};
//Better Solution(in Leetcode Editorial)
class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> t(n+1);

        t[0] = 0;

        for(int i = 1; i<=n; ++i)
            t[i] = t[i/2] + i%2;
        
        return t;
    }
};
