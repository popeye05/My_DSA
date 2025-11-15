class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> result; int temp=0;
        for(int i =0;i<operations.size();i++)
        {
            if(operations[i] == "+")
            {
                temp = result.top();
                int x= result.top();
                result.pop();
                temp += result.top();
                result.push(x);
                result.push(temp);
            }
            else if(operations[i] == "D")
            {
                temp = 2*result.top();
                result.push(temp);
            }
            else if(operations[i] == "C")
            result.pop();
            else{
                 int x = stoi(operations[i]);
                 result.push(x);}
        }
       int ans=0;
       while(!result.empty())
       {
        ans += result.top();
        result.pop();
       }
       return ans;
    }
};
