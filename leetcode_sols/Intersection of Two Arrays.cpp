//My Approach: 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0, j = 0;

        vector<int> result;
        unordered_set<int> visit;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        while(i < m && j < n) {
            if(nums1[i] == nums2[j]) {
                if(!visit.count(nums1[i])) {
                    visit.insert(nums1[i]);
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return result;
    }
};
//There is another Hashing Approach Which I Learned and it is Much more simpler: 
unordered_set<int> set1(nums1.begin(), nums1.end());
unordered_set<int> result;
for (int num : nums2) {
    if (set1.count(num)) result.insert(num);
}
return vector<int>(result.begin(), result.end());
