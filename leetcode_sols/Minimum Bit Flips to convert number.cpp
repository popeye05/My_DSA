//Here I've used the Hamming Distance Most optimal Approach
class Solution {
public:
    int minBitFlips(int start, int goal) {

        return __builtin_popcount(start ^ goal);

    }
};
//You can check ooout the builtin popcount logic, its super useful, in case of nbit manipulation problems!
