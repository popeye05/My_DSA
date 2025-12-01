class Solution {
public:
    void sortColors(vector<int>& nums) {
        int store[3]={0,0,0};
        //1st step
        for(int i:nums)  store[i]++;
        //2nd step
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
           while (j < 3 && store[j] == 0) j++;
           nums[i] = j;
           store[j]--;
        }
        
    }
};

//But This is actually a DUTCH NATIONAL FLAG PROBLEM,, so we must know that algorithm:
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++; 
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
