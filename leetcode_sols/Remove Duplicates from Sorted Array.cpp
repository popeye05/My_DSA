class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        if(nums.empty())
        return 0;
        else{
            for(int i=1;i<nums.size();i++)
            {
                  if(nums.at(i-1)!=nums.at(i))
                  {
                    nums[k]=nums[i];
                    k++;
                  }
            }return k;
          
        }
    }
};
