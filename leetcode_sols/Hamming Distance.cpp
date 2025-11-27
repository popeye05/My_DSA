//My solution
class Solution {
public:
    int hammingDistance(int x, int y) {
       bitset<32> A(x);
       bitset<32> B(y); 
       int ans=0;
       bitset<32> xorResult;
       xorResult = A^B;
       for(int i=0;i<xorResult.size();i++)
       {
        if(xorResult[i]==1) ans++;
       }
        return ans;
    }
};
//Best Solution
class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x ^ y);
    }
};
