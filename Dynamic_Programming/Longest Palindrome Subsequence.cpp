class Solution {
public:
      int lcs(string text1, string text2,int m,int n)
    {
   
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(text1[i-1]==text2[j-1]) dp[i][j] = 1+dp[i-1][j-1];
                else dp[i][j] = 0+ max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[m][n];
    }
    int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        return (s,t,s.length(),t.length());
    }
};
