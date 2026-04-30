class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> visit;

        for(int x : nums) {
            if(visit.count(x)) return true; //i.e. If the cond. satisfies, this implies already visited
            visit[x] = 1; 
        }
        return false;
    }
};
