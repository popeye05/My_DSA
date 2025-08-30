class Solution {
public:
    bool isIsomorphic(string s, string t) {
        //I'll create a map which checks iff a character is mapped or not!
        unordered_map<char,char> mapST; //Thsi will map from S to T
        unordered_map<char,char> mapTS; //This will map from T to S
        for(int i=0;i<s.length();i++)
        {
            char c1 = s[i], c2=t[i];
           if(mapST.count(c1)  && mapST[c1]!= c2) return false;
           if(mapTS.count(c2)  && mapTS[c2]!= c1) return false;
            mapST[c1]=c2;
            mapTS[c2]=c1;
        } return true;
    }
};
// Check Out the Nikhil Lohia solution. Ive used his solution.
//The Difference is I've additionally used the Count Function , to check  if a key exists or not !


