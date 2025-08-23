#include <string>      
#include <algorithm>   

class Solution {
public:
    std::string largestGoodInteger(std::string num) {
    std::string max_good_integer = ""; 
     if (num.length() < 3) {
            return ""; }
        for (int i = 0; i <= num.length() - 3; ++i) {
            if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
                std::string current_good_integer = num.substr(i, 3);
                if (current_good_integer > max_good_integer) {
                    max_good_integer = current_good_integer;
                }
            }
        }
        return max_good_integer;
    }
};
