class Solution {
public:
    int reverse(int x) {
        int x1; x1=x; int ans = 0;
        while(x1!= 0)
        {
            if((ans > INT_MAX/10)||(ans < INT_MIN/10))
            {
                return 0;
            }
            ans = ans * 10 ;ans += x1 % 10;
            x1 /= 10;
        } return ans;
    }
};
