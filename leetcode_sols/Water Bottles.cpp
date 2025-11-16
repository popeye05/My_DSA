//Log N Approach
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles; //This is pretty Obvious, I'll drank these
        //Now The Exchange part comes in, I Have numBottles no of Empty Bottles
        while(numBottles >= numExchange)
        {
            int rem = numBottles%numExchange; //This Gives You The remaining Ones
            int full = numBottles/numExchange; // This is the no of full bottle ill get after ex.
            ans += full; //And That ill drink again
            numBottles = rem + full; //numBottles will be the remaining ones which i couldnt exchange + the number of bottle i drank now...
        } return ans;
    }
};
//O(1) approach:
 //This is actually a One Liner and Check Out the Aryan Mittal Video For Explanation. Wonderful!
return numBottles + (numBottles -1 )/(numExchange - 1);
