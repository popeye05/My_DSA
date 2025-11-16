class Solution {
public:
    int thirdMax(vector<int>& nums) {
      set<int> unique_nums(nums.begin(), nums.end()); //First, Create a Set of unique elements
      vector<int> unique(unique_nums.begin(), unique_nums.end()); //Then back to vector!
        int n = unique.size();
        if(n<3) return unique[n-1];
        else return unique[n-3];
    }
};
