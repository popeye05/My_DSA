//This is a very NGE problem because it requires the concept of Circular array additionally!
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> st; // stores indices

        // traverse twice for circular effect
        for(int i = 2*n - 1; i >= 0; i--) {
            int idx = i % n;

            while(!st.empty() && nums[st.top()] <= nums[idx])
                st.pop();

            if(!st.empty())
                result[idx] = nums[st.top()];

            st.push(idx);
        }

        return result;
    }
};
