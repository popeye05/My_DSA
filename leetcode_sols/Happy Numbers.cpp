class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int> seen; //This is going to be my Hash Set.
    
        while(n != 1) //run my loop until i get 1. Because that's happy Number 
        {
            int sum=0;
            if(seen.count(n)) return false; //going to use count to visit if it exists or not 
            seen.insert(n); //I'm Going to insert n in my Hash Set;
            while(n>0)
            {
               int digit = n % 10; //hence I'm getting the digits
                sum += (digit*digit) ; //as digit E [0,9] simply consider digit as int
                n /= 10;
            }
            n=sum;
        }
        return true; //if comes out of loop succesfully, then it is a happy number!
    }
};
