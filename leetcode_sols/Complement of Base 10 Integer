class Solution {
public:
    int bitwiseComplement(int n) { 
    int i=n,j=1;
    if(n==0)
    {
        return 1;
    }
     while(i!=0)
     {
        j *= 2;
        i /=2;
     } 
     j -= 1;
     int ans = j-n;
     return ans;
    }
};
