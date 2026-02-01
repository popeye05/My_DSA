//Recursive Sol, which is not optimal and probably TLE , but the base of DP
class Solution {
int min_cost(vector<int>& cost,int i)
{
    if(i>=cost.size()) return 0;
    return cost[i] + min(min_cost(cost,i+1),min_cost(cost,i+2));
}
public:
    int minCostClimbingStairs(vector<int>& cost) {
       int ans=0; 
       ans += min(min_cost(cost,0),min_cost(cost,1));
   return ans;
    }
};
//DP SOlution
class Solution {

public:
    int minCostClimbingStairs(vector<int>& cost) {
          int n = cost.size();
    int prev2 = 0, prev1 = 0;
         for (int i = 2; i <= n; i++) {
        int cur = min(prev1 + cost[i-1], prev2 + cost[i-2]);
        prev2 = prev1;
        prev1 = cur;
    }
    return prev1;
    }
};
