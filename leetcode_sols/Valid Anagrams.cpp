//My Solution: 

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freqS;
        unordered_map<char,int> freqT;
        if(s.length() != t.length()) return false;
        for(int i=0;i<s.length();i++)
        {
         char k1=s[i], k2= t[i];
         if(!freqS.count(k1)) freqS[k1]=1;
         else freqS[k1] +=1;   
         if(!freqT.count(k2)) freqT[k2]=1;
         else freqT[k2] +=1;
        } //Ive mapped the frequency with the characters of s and t
        
        for(char i:s)
        {
            if(!freqT.count(i) || freqT[i] != freqS[i] ) return false;
        }
        return true;
    }
};

//A Great Solution, Wonderful Approach:
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        vector<int> freq(26, 0);
        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        
        for (int i = 0; i < freq.size(); i++) {
            if (freq[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
