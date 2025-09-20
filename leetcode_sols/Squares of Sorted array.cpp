//Only the follow up Optimal Solution is I've added here, as the question demands it:
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int l = 0, r = n - 1, pos = n - 1;

        while (l <= r) {
            if (abs(nums[l]) > abs(nums[r])) {
                result[pos--] = nums[l] * nums[l];
                l++;
            } else {
                result[pos--] = nums[r] * nums[r];
                r--;
            }
        }
        return result;
    }
};
/*
I actually did at first a nlogn soln,
Now, Basically it was--
1)Square each elemnt
2)sort again
But this is the optimal soln because its a O(n) soln, although uses an auxiliary memory but , due to tc, it is considered a bette5 and optimal solution>
*/
