//My Wrong logic, I used the two pointers:
//WRONG ANSWER!!!!!!!!!
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int i=0,j=k,Maxenergy=INT_MIN;
        while(i < energy.size())
        {
           if(j < energy.size())  Maxenergy = max(Maxenergy,energy[i]+energy[j]);
           else  Maxenergy = max(Maxenergy,energy[i]);
           i++;j++;
        }
        return Maxenergy;
    }
};
//(failed the 408th case out of 534)
//Correct logic!!!!!!
class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        int Maxenergy = INT_MIN;

        for (int i = n - 1; i >= 0; --i) {
            if (i + k < n)
                energy[i] += energy[i + k];
            Maxenergy = max(Maxenergy, energy[i]);
        }

        return Maxenergy;
    }
};
