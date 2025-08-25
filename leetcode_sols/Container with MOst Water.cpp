class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int max_water, temp;
        //Two Pointer approach
        max_water= 0 ;
        while(i<j)
        {
            temp = min(height[i],height[j]) * (j-i) ;
            max_water=max(max_water,temp);
             if(height[i]<height[j])
            i++;
            else
            j--;
        }
        return max_water;
    }
};
