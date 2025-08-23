class Solution {
public:
    int lengthOfLastWord(string s) {
        int  index=0,length=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==32 && (s[i+1] != 32 && s[i+1] != 0))
                index=i+1;
            
        }
        for(int i=index;i<s.length();i++)
        {
            if(s[i]==32)
            {
                break;
            }
            length++;
        }
        
        return length;
    }
};
