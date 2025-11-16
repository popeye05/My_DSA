class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       vector<string> ans;
        //Let i denotes the target pointer\
        and j denotes the streampointer;
        int i=0;int j=1;
        while(i<target.size())
        {
                ans.push_back("Push");
                if(target[i]==j)    i++;
                else ans.push_back("Pop");
                j++;    
        }
        return ans;
    }
};
