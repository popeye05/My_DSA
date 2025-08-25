#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> summaryRanges(std::vector<int>& nums) {
        if (nums.empty()) {
            return {};
        }

        std::vector<std::string> result;
        int start = nums[0];

        for (int i = 1; i <= nums.size(); ++i) {
            if (i == nums.size() || (long long)nums[i] != (long long)nums[i - 1] + 1) {
                int end = nums[i - 1];
                if (start == end) {
                    result.push_back(std::to_string(start));
                } else {
                    result.push_back(std::to_string(start) + "->" + std::to_string(end));
                }
                
                if (i < nums.size()) {
                    start = nums[i];
                }
            }
        }
        
        return result;
    }
};
