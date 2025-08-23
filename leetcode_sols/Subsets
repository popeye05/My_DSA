class Solution {
private:
void solve(vector<int> nums , vector<vector<int>> &ans,vector<int> subset, int index )
{
    //base case
    if(index >= nums.size())
    {
        ans.push_back(subset);
        return;
    }
    //exclude
    solve(nums,ans,subset,index+1);
    //include
    int element_in_set = nums.at(index);
    subset.push_back(element_in_set);
    solve(nums,ans,subset,index+1);


}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        int index=0;
        solve(nums,ans,subset,index);
        return ans;
    }
};
