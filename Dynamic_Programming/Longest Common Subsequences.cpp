//Recursive Solution
class Solution {
public:
    int lcs(string text1, string text2,int m,int n)
    {
        int i=m,j=n;
        if(i<0 || j<0 )
            return 0;
        if(text1[i] == text2[j]) return 1 + lcs(text1,text2,i-1,j-1);
        return 0 + max(lcs(text1,text2,i,j-1),lcs(text1,text2,i-1,j));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length()-1;
        int n = text2.length()-1;
        return  lcs(text1,text2,m,n);
    }
};
//Bottom UP Approach
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
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();
        return  lcs(text1,text2,m,n);
    }
};
