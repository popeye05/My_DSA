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

//Bit AMnipulation: 
