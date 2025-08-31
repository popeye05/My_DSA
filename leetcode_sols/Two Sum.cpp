class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mapNums;
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++) {
            int more = target - nums[i];
            if(mapNums.count(more)) {
                result.push_back(mapNums[more]);
                result.push_back(i); //Thsi line is the game changer , because it actually tackles the duplicate
                return result;
            }
            mapNums[nums[i]] = i;
        }
        return result;
    }
};
/*Basically, we are doing what?
We are iterating through the nums. On each iteration we are calculating the more value i.e.  nothing but the target - nums[i]
now we are checking if that value we have already mapped or not, if not, then we will map the ccurrent index value
but if yes, then we have found the answer! we will get the index by the map, taht we'll push back and another also..and done!
 */
