class Solution {
public:
    int strStr(string haystack, string needle) {
       int i,j=0,result=-1;
       for(i=0;i<haystack.length();i++)
       {
       if(j!=0 && j < needle.length())
        {
            if( needle[j]==haystack[i])
                j++;
            else{
                j=0;
                i=result;
                result=-1;
                }
        }
        else{
        if(needle[j]==haystack[i])
            {
            result=i;
            j++;
            }
        }
       }
   if(j==needle.length())
    return result;
    else
        return -1;
    }
};
