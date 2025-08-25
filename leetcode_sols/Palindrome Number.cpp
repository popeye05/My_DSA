#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(int x) {
        int i=0;
        vector<int> num;
        if(x<0)
            return false; //This is because negative integers are autommatically not palindrome
        while(x>0)
        {
            num.push_back(x%10);
            x/=10;
        }
        for(i=0;i<num.size()/2;i++)
        {
            if(num[i]!=num[(num.size()-1)-i])
                return false;
        }
        return true; 
    }
};
