class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxind=0; //This is my Max Index
        for(int i=0;i< nums.size();i++)
        {

         if(i > maxind)
                return false;
         if((i+nums[i]) > maxind)
                maxind = i+nums[i];
        }
        return true;
    }
};
