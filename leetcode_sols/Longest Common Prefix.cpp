#include<bits/stdc++.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string result="""";
        if(strs.empty())
            return result;
        sort(strs.begin(),strs.end());
       
        string s1=strs[0];
        string s2 = strs[strs.size()-1];
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i] != s2[i])
                break;
            else
            {
                result.push_back(s1[i]);
            }
            
        }
        return result;
        
    }
};
