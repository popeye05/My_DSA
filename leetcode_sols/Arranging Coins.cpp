//My Solution
class Solution {
public:
    int arrangeCoins(int n) {
    if(n==1 || n == 2)return 1;
    if(n == 3) return 2;
      long long int i = 1;
       while(n/(i*(i+1)/2) != 0) i++;
    if ((i*(i+1)/2) % n == 0)
        return i;
    else return i-1;
    }
};

//Best Sol
class Solution {
public:
    int arrangeCoins(int n) {
        return (int)((-1 + sqrt(1 + 8.0 * n)) / 2);
    }
};
