class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0,ten=0; //Twenty has no significance, we cant return 20 to anyone
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5) five++;
            else if(bills[i] == 10 && five > 0) {ten++;five--;}
            else if(bills[i] == 20 ) { 
                if(five>0 && ten>0){ten--; five --;}
                else if(five >=3) {five -=3;}
                else return false;
                } 
            else return false;
        } return true;
    }
};
