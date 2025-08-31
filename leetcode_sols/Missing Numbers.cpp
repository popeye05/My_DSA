//Hashmap Solution

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> seen; 
        for(int i: nums) seen.insert(i); int i;
        for(i=0;i<=nums.size();i++)
        {
            if(!seen.count(i)) break;
        }
        return i;
    }
};

//Bit Manipulation: (i.e Using XOR) 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
     int XorValue =nums.size();
     for(int i=0;i<nums.size();i++) 
     {
        XorValue ^= i ^ nums[i];
     }   return XorValue; 
    }
};
