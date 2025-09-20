class Solution {
public:
   vector<int> rowprint(int n)
    {
        vector<int> result;
        long long ans = 1;
        result.push_back(1); 
        for(int i=1;i<n;i++)
        {
            ans *= (n-i); //For this step i've initialize the anns as a long long type
            ans /= i;
            result.push_back((int)ans);
        }
        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=1;i<=numRows;i++)
        {
            result.push_back(rowprint(i));
        }
        return result;
    }
};
