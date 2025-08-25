class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n,i,j;
        n=nums.size();
        for( i=0;i<n;i++)
        {
             if(nums.at(i)==val)
             {
               for(j=i+1;j<n;j++)
               {
                nums.at(j-1)=nums.at(j);
                } n--;i--;
             } 
            
        }
        return n;
        
    }
};
