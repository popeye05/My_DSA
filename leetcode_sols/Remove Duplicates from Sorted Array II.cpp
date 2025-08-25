class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //I'll use the two pointer method because the array is given is sorted
        int  i,k=0,temp=nums[0],count=-1;
        for(i=0;i<nums.size();i++)
        {     
            if(temp!=nums[i])
            {
               temp=nums[i];
                count=0;
            }
            else
                count++;
            if(count<2)
                nums[k++]=nums[i];
        }
        return k;
    }
};
