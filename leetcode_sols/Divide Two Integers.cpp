class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==dividend) return 1; int cnt;
        bool sign=true;
        if(dividend < 0 && divisor > 0) sign =false;
        if(dividend >= 0 && divisor < 0) sign =false;
        long long n = abs((long long)dividend); long long d = abs((long long)divisor);
        //Now My main Problem Solving starts from here!
        long long int ans=0;
        while(n >= d)
        {
            cnt=0; 
            while(n >= (d<<(cnt+1)) )
            {
                cnt++;
            }
            ans += (1<<cnt);
            n-=(d<<cnt);
        }
    if(ans==(1<<31) && sign==true)
        return  INT_MAX;
     if(ans==(1<<31) && sign==false)
        return  INT_MIN;
    if(sign==false)
        return -ans ;
    return ans;
    }
};
