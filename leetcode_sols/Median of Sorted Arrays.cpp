//My sol , only for leetcode: 
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> nums3;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j]) nums3.push_back(nums1[i++]);
            else nums3.push_back(nums2[j++]);
        }
        while(i<nums1.size()) nums3.push_back(nums1[i++]);
        while(j<nums2.size()) nums3.push_back(nums2[j++]);
        //merging done;
        int l=0,h=nums3.size()-1;
        int mid = (l+h)/2;
        double result;
        bool odd;
        if(nums3.size()%2 !=0) odd=true;
        else odd=false;
        if(odd)  result=nums3[mid];
        else{
            result= (nums3[mid]+nums3[mid+1])/2.0;
        }
        return result;
    }
};
//Remember thats not teh actual solution, becoz...it has higher time complexity and requires a spacee compelexity of O(n)
//Binary Search will help in this one.
