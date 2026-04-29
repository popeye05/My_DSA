//Recursive Solution
class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 || n == 1) return 1;//Because  it'll have only one option
        else return  uniquePaths(m-1,n) + uniquePaths(m,n-1);
    }
};
//DP Bottom Up
class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>> dp(m, vector<int>(n, 1)); //This is init with 1

        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[m - 1][n - 1];
    }
};
