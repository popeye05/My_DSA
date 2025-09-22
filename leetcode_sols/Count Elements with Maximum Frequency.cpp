class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {
            if(!freq.count(nums[i])) freq[nums[i]] = 1;
            else freq[nums[i]]++;
        }
        int maxfreq=0,count=0; 
        for(int i=0;i<nums.size();i++)   maxfreq = max(maxfreq,freq[nums[i]]);
        for(int i=0;i<nums.size();i++)  {if(freq[nums[i]]==maxfreq) count += maxfreq/freq[nums[i]];}
        return count;
    }
};
