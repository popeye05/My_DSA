//RECURSIVE SOLUTION


class Solution {
public:
    //Helper Recursive function
    int tri(vector<vector<int>>& triangle, int i, int j)
    {
        int m = triangle.size()-1; 
        if(i == m ) return triangle[i][j];
        return triangle[i][j] + min(tri(triangle,i+1,j),tri(triangle,i+1,j+1)); 
    }

    int minimumTotal(vector<vector<int>>& triangle) {
    int m,n; //M = Rows, N =  Cols
    m = triangle.size()-1; n= triangle[0].size()-1;
    //Call The Recursive
    return tri(triangle,0,0);      
    }
};
//------------------------------------------------------------------------------------------
//BOTTOM UP DP SOLUTION
class Solution {
public:
    //Helper Recursive function


    int minimumTotal(vector<vector<int>>& triangle) {
 
    int m = triangle.size()-1; //Row
    int n= triangle[m].size()-1; //Last Row Column Number

    vector<vector<int>> dp(m+1, vector<int>(m+1, 0));
     dp[0][0] = triangle[0][0];
     if(triangle.size() == 1) return triangle[0][0];
    for(int i=1;i<=m;i++)
    {
        for(int j=0;j<=i;j++)
        {
              if(j == 0) {
                    // left edge(i.e, it cant come from diagonal)
                    dp[i][j] = triangle[i][j] + dp[i-1][j];
                }
                else if(j == i) {
                    // right edge(i.e cant come from top)
                    dp[i][j] = triangle[i][j] + dp[i-1][j-1];
                }
                else {
                    // middle
                    dp[i][j] = triangle[i][j] + 
                               min(dp[i-1][j-1], dp[i-1][j]);
                }
        }
    }
    int ans= INT_MAX;
   
    for(int i=0;i<=n;i++) ans = min(ans,dp[m][i]);
    return ans;
    }
  
};
