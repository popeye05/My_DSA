class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        int mid = (nums.size())/2;
        sort(nums.begin(),nums.end());
        long long res = abs(nums[mid]-k);
        //1st Half
        for(int i=0;i<mid;i++)
        {
            if(nums[i] > k )
            res += abs(k-nums[i]) ;
        }
        //2nd Half
        for(int i=mid +1 ;i<nums.size();i++)
        {
             if(nums[i] < k )
            res += abs(k-nums[i]) ;
        }
    
        return res;
    }
};
