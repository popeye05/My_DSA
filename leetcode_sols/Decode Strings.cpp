class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;
        stack<string> strStack;
        string currStr = "";
        int currNum = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                currNum = currNum * 10 + (ch - '0');
            } else if (ch == '[') {
                numStack.push(currNum);
                strStack.push(currStr);
                currNum = 0;
                currStr = "";
            } else if (ch == ']') {
                int repeat = numStack.top();
                numStack.pop();
                string prevStr = strStack.top();
                strStack.pop();
                string repeated = "";
                for (int i = 0; i < repeat; i++)
                    repeated += currStr;
                currStr = prevStr + repeated;
            } else {

                currStr += ch;
            }
        }

        return currStr;
    }
};
