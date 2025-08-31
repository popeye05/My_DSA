class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int totalGas=0,totalCost=0;
        for(int i=0;i<gas.size();i++)
        {
            totalGas += gas[i]; totalCost += cost[i];
        }
        if(totalGas < totalCost) return -1; //Because its a impossible trip
        //Now from this step, we will use Greedy approach: 
       //Also because totalGas is not < totalCost in this step, Thus solution is obviously possible.
        int currentGas=0,startfrom=0; //Thsi current gas will calculatte the requirement of gas
        for(int i= 0; i< gas.size(); i++ )
        {
            currentGas = currentGas + (gas[i] - cost[i]); //Calculate requirement
            if(currentGas < 0){ //that means -ve. then we discard it
                 startfrom=i+1;
                  currentGas= 0;
                //We will again iterate but with new startIndex;
            }
           
        } return startfrom;
    }
};
