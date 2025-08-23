class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Moore's Voting Algo is used for linear time and O(1) space complexiety:
        //Alternatively the hashmap is used
       int cnt, cnt1,el;
        for(int i=0;i<nums.size();i++)
        {
            if(cnt==0){
                cnt=1;
                el=nums[i];}
            else if(nums[i]==el)
                cnt++;
            else
                cnt--;
        }
        //Again we'll iterate through the loop to check if our element is Majority or not
        for(int i=0;i < nums.size();i++ )
        {
            if(nums[i]==el)
            cnt1++;
        }
        if(cnt1 > (nums.size()/2))
            return el;
        else
            return -1;



    }
};
