#include<cmath>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
         while(n >= pow(2,i))
         {
            if(n == pow(2,i))
            {
                return true;
            }i++;
         } return false;
    }
};
