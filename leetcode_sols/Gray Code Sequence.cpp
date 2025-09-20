class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
      int total = 1<<n; //i.e. 1 X (2^n) because for the gray code n bits 2^n combinations are possible  
      for(int i=0;i<total;i++)
          {
          result.push_back(i^(i>>1));
          }
      return result;
};
