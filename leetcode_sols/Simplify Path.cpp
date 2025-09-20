//My Solution: (Easy & Beats 100%)
class Solution {
public:
    string simplifyPath(string path) {
      stack<string> store;
      for(int i=0;i<path.length();i++)  
        {
           string temp= "";
            if(path[i]=='/')
            {
                int j=i+1;
                while(j < path.length() && path[j]!='/') temp+=path[j++];
                i=j-1;
                if(temp == "" || temp == ".") continue;
                if(temp=="..") {if(!store.empty())  store.pop();}
                else store.push(temp);   
            }
        }
            vector<string> tempres;
            while(!store.empty()) 
            {
            tempres.push_back(store.top());
            store.pop();
            }
            reverse(tempres.begin(), tempres.end());
            string result;
            for(int i=0;i<tempres.size();i++)
            {
                result += '/';
                result+=tempres[i];
            }
       if (result.empty()) return "/";
       return result; 
    }
};
//Optimal Soltuion Which i Learned:
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dirs;   // acts like a stack
        string temp;
        stringstream ss(path);

        while (getline(ss, temp, '/')) {
            if (temp == "" || temp == ".") {
                // skip empty or current directory
                continue;
            } else if (temp == "..") {
                if (!dirs.empty()) dirs.pop_back(); // go one level up
            } else {
                dirs.push_back(temp); // valid directory
            }
        }

        // Build result
        string result = "/";
        for (int i = 0; i < dirs.size(); i++) {
            result += dirs[i];
            if (i != dirs.size() - 1) result += "/";
        }

        return result;
    }
};
