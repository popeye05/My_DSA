
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid=0;
        while(l<=h)
        {
            mid = l + (h-l)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                h=mid-1;
            else
                l=mid+1;
        }
            return l; // L is the last index which got updated and hence it will be returned
    }
   
};
